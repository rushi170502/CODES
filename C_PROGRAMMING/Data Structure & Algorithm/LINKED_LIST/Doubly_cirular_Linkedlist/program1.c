

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

int addfirst(){

	Node *newnode= createnode();

	if(head == NULL){

		head = newnode;
		newnode->prev = head;
		newnode->next = head;

	}
	else{

		newnode->next = head;
		newnode->prev=head->prev;
		head->prev=newnode;
		head=newnode;
		head->prev->next=head;
	

	}

	return 0;

}


int addatpos(){

	int pos;
	printf("\nEnter the position u want add node :  ");
	scanf("%d",&pos);

	int count=countnode();

	if(pos <= 0 || pos > count+1){
		printf("\nInvalid position..");
		return -1;
	}
	else{
		if(pos == 1)
			addfirst();
		else if(pos == count+1)
			addnode();

		else{

			Node *newnode=createnode();
			Node *temp=head;

			while(pos-2){

				temp= temp->next;
				pos--;
			}


			newnode->next=temp->next;
			newnode->prev =temp;
			temp->next->prev=newnode;
			temp->next=newnode;

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

	printf("\nadding at first \n");

	addfirst();

	printDCLL();

	addatpos();

	printDCLL();

	printf("\n\n");


}
