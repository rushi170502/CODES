


// WAP to sot the data in particular linked list....

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;

}node;

node *head = NULL;

node *createnode(){

	node *newnode = (node *)malloc(sizeof(node));

	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);

	newnode->next= NULL;

	return newnode;


}

int addnode(){

	node *newnode= createnode();

	if(head == NULL){

		head= newnode;
	}
	else{

		node *temp= head;

		while(temp->next != NULL){

		temp = temp->next;

		}
		temp->next =newnode;

	}

}

void printdata(){

	node *temp=head;
	if(head == NULL){
	
		printf("\nLinked list is empty..\n");
	}
	else{

		while(temp != NULL){

			printf("| %d |-->",temp->data);

			temp=temp->next;

		}
		printf("NULL");
	}


}

 int count_node(){


	 int count =0 ;
	 node *temp= head;
	 while(temp!= NULL){

		 count++;
		 temp=temp->next;
	 }
	 return count;
 	
 }
  int bubblesort(){

	int count = count_node();
	  
	  int temp2;

	  while(count -1 ){

		  node *temp = head;

		  while(temp->next != NULL){


		  if(temp->data > temp->next->data){

			  temp2= temp->data;
			  temp->data= temp->next->data;
			  temp->next->data= temp2;
		   
		  }

		  temp= temp->next;
		  }
		  
		  count--;
	  }


  }

void main(){

	int nodecount;

	printf("\nEnter the node you want to add : ");
	scanf("%d",&nodecount);

	for(int i=1;i<=nodecount;i++){

		addnode();
	}
	printf("\n Before sorting..");

	printdata();

	bubblesort(head);

	printf("\nAfter sorting.");

	printdata();

	printf("\n\n");


}
