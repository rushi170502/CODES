

// WAP to print the student data
//
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Student{

	int s_id;
	float s_height;

	struct Student *next;

}stud;

void main(){

	stud *head=NULL;
	//create 1st node..
	stud *newnode= (stud*)malloc(sizeof(stud));

	newnode->s_id=101;
	newnode->s_height=5.5;

	newnode->next=NULL;

	//connecting first node to head
	head=newnode;

	//creating 2nd node..
	newnode=(stud*)malloc(sizeof(stud));

	newnode->s_id=102;
	newnode->s_height=6.5;
	newnode->next=NULL;	
	//connecting 2nd node..
	head->next=newnode;
	
	//creating 3rd node...
	newnode=(stud*)malloc(sizeof(stud));
	newnode->s_id=103;
	newnode->s_height=7.5;

	//connecting 3rd node..
	head->next->next=newnode;

	stud *temp=head;

	while(temp!=NULL){

		printf("stud id  : %d\n",temp->s_id);
		printf("stud height  : %f\n\n",temp->s_height);
		temp=temp->next;

	}
}

