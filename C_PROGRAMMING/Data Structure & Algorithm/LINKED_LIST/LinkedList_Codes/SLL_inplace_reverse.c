
// WAP to reverse a linked list by using inplace reverse Function...
// using singly linked list
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;
	struct Node *next;

}node;

node *head = NULL;

int printSLL();

int nodecount(){

	int count=0;
	 
	node *temp= head;
	while(temp->next != NULL){

		count++;
		temp=temp->next;
	}

	return count+1;

}
node *createnode(){

	node *newnode = (node *)malloc (sizeof(node));

	printf("\nEnter the data  :  ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}


int addnode(){

	node *newnode = createnode();

	if(head == NULL)
		head=newnode;
	else{
		node *temp= head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return 0;

}

int SLL_inplace_rev(){


	if(head == NULL){
		printf("\nLinked list is empty..\n");
		return -1;
	}

	else if(head->next == NULL){
		printf("\nNo need to swap the data..\n");
	}
	else{

		node *temp1 =head;
		node *temp2 =head->next;

		head=head->next;
		temp1->next = NULL;

		while(head != NULL){

			head= head->next;
			temp2->next=temp1;
			temp1=temp2;
			temp2=head;
		}
	 		head = temp1;
			printf("\nLinked list reversed successfully...");		
			printSLL();
	      }

      }


int printSLL(){

	if(head == NULL){
		printf("\nLinked list is empty ...");
	}
	else{

		node *temp = head;

		while(temp != NULL){

			printf("| %d |-->",temp->data);
			temp = temp->next;
		}
		printf("NULL\n\n");

		return 0;

	}

}



void main(){

	int countnodes;
	printf("\nEnter the count of nodes u want to add  :  ");
	scanf("%d",&countnodes);

	for(int i = 1; i <= countnodes; i++){
		addnode();
	}
	printf("\n %d nodes added...\n",countnodes);

	printSLL();

/*	int count= nodecount();
	printf("%d\n",count);
*/

	SLL_inplace_rev();

	printf("\n");
}
