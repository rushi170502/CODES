
// WAP to accept the data of student using function and print the data using funtion...
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
	int s_id;
	char s_name[20];
	float s_res;

	struct student *next;

}stud;

// function for creating the node..
  stud * addnode(stud * head){// it has return type so we use stud *


	stud *newnode=(stud*)malloc(sizeof(stud));
	newnode->s_id=101;
	strcpy(newnode->s_name,"Rahul");
	newnode->s_res=9.6;
	newnode->next=NULL;
	head=newnode;// connecting head to newnode
	return head;

  }
// function for print data

stud *  printdata(stud *head){

	stud *temp=head;

	while(temp!=NULL){
	printf("%d\n",temp->s_id);
	printf("%s\n",temp->s_name);
	printf("%f\n",temp->s_res);

	temp=temp->next;
	
       }


}

  void main(){
	  stud *head=NULL;

	  // call the function from main
	  addnode(head);
	  printdata(head);

	  printf("\n\n");
  }
