

// WAP to implement doubly circular linked list..
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node * prev;

	int data;

	struct Node *next;

}Node;


Node *head=NULL;

int countnode(){

	Node *temp=head;

 	int count;

	while(temp->next != head){

		count++;
		temp=temp->next;

	}

	return count+1;

}

Node *createnode(){

	Node *newnode = (Node *) malloc (sizeof(Node));

	newnode->prev = NULL;

	printf("\nEnter the data :  ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;

}

int addnode(){


	Node *newnode=createnode();

	if(head == NULL){

		head=newnode;
		newnode->prev=head;
		newnode->next=head;
	}
	else{
		Node *temp = head;

		while(temp->next != head){
			temp=temp->next;
		}

		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = head;
		head->prev = newnode;

		/* without temp
		 
		   head->prev->next=newnode;
		   newnode->next=head;
		   newnode->prev=head->prev;
		   head->prev = newnode;

		   */
	}
	return 0;

}

int delfirst(){

	if(head == NULL){

		printf("\n Linked list is empty...\n");
		return -1;

	}
	else{

		if(head->next == head){
			free(head);
			head = NULL;
		}
		else{
			head = head->next;
			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
	

	}

	return 0;

  }

}

int dellast(){

	if(head == NULL){
		printf("\nLinked list is empty...");
		return -1;
	}
	else{
		if(head->next == head){
			free(head);
			head = NULL;
		}
		else{

			head->prev= head->prev->prev;
			free(head->prev->next);
			head->prev->next =head;

		}
		return 0;

	}

}



int delatpos(){

	int pos;
	printf("\nEnter the position u want add node :  ");
	scanf("%d",&pos);

	int count=countnode();

	if(pos <= 0 || pos > count){
		printf("\nInvalid position..");
		return -1;
	}
	else{
		if(pos == 1)
			delfirst();
		else if(pos == count)
			dellast();

		else{

		
			Node *temp=head;

			while(pos-2){

				temp= temp->next;
				pos--;
			}

			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev=temp;

		}
		return 0;
	}
}



int printDCLL(){

	Node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty...");
		return -1;
	}
	else{
		
		while( temp->next != head){

			printf("| %d |-->",temp->data);
			temp=temp->next;
	       }
		printf("| %d |-->NULL\n",temp->data);
		return 0;
         }

}


void main(){

	int nodecount;

	printf("\nEnter the no. of nodes u want to add :  ");
	scanf("%d",&nodecount);

	for(int i = 1; i <= nodecount; i++){

		addnode();
	}

	printf("%d nodes added...\n\n",nodecount);

	printDCLL();

	printf("\n Delete at first \n");

	delfirst();

	printDCLL();

	printf("\nDeleting last node.\n");
	dellast();

	printDCLL();

	printf("\nDelete node at position\n");

	delatpos();

	printDCLL();

	printf("\n\n");


}
