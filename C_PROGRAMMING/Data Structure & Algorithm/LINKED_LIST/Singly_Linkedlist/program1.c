
// To create the singly linked list  

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;

	struct node *next;

}node;

 void main(){

	 node *head=NULL;
	// creating 1st node of linked list..
	
	 node *newnode=(node*)malloc(sizeof(node));
	
	 newnode->data=10;

	 newnode->next=NULL;

	 head=newnode;// give the address of newnode to head..

	 // creating 2nd node of link...
	 
	 newnode=(node*)malloc(sizeof(node));

	 newnode->data=20;
	 newnode->next=NULL;

	 head->next=newnode;//give the address of newnode to the next of first node..
			    //

	  // creating 3rd node of link..
	  
	 newnode=(node*)malloc(sizeof(node));

	 newnode->data=30;
	 newnode->next=NULL;

	 head->next->next=newnode;// give the address of next newnode to the previous node..
				  //
	
	 // printing the nodes...

	 node * temp=head;// it is temparary person who stores the starting address and by using this it traverse the whole linkedlist..

	 while(temp!=NULL){//temp->next!=NULL is wrong way
				 //here actually the temp goes to only two node because the third node 
				 // contain the NULL so it consider as NULL and does not print all nodes...

		 printf("%d  ",temp->data);

		 temp=temp->next;// it is use to traverse the linked list node by node...so we increment it


            }
	 printf("\n\n");
	}



