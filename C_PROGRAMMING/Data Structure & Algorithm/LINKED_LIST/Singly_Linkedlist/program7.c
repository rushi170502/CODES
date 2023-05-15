

// WAP to print the data of student , here we use head * as a global variable...
//
#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int s_id;
	float s_height;

	struct student *next;

}stud;

     stud *head=NULL;// global declaration of head.. so we don't need to give parameters to function
		     
     void addnode(){

	     stud *newnode=(stud*)malloc(sizeof(stud));

	     newnode->s_id=101;
	     newnode->s_height=5.5;

	     newnode->next=NULL;

	     head=newnode;

     }

    void printdata(){

	    stud *temp=head;// temporary person for perform traversal on linked list

	    while(temp!=NULL){

		    printf("stud id =  %d\n",temp->s_id);
		    printf("stud height  = %f\n",temp->s_height);

		    temp=temp->next;

	    }
	   
	  }

	void main(){

		addnode();
		addnode();
		printdata();
		printdata();

	}
