// Doubly linked list
//WAP to add the digit of partcular node in a doubly linked list and print add
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

 
Node *head=NULL;

Node *createnode(){

     Node *newnode= (Node*)malloc(sizeof(Node));

     newnode->prev=NULL;

     printf("\nEnter the data :  ");
     scanf("%d",&newnode->data);

     newnode->next=NULL;

	     return newnode;

}
int addnode(){
	
	Node *newnode=createnode();

	Node * temp=head;

	if(head==NULL){
		head=newnode;
	}
	else{
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}

}
void printDLL(){

	Node *temp=head;

	if(head== NULL){
		printf("\nLinked list is empty...\n");
	}else{
		printf("NULL<-- ");
		while(temp!=NULL){

			printf("| %d |-->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");

	}

}

int Digitadd(){

	Node *temp=head;

	int rem;
	if(head == NULL){
		printf("\nLinked list is empty ...");
		return -1;
	}else{
		

		printf("NULL<--");
		while(temp != NULL){
			
			int num=0;
			while(temp->data != 0){

				rem =temp->data % 10;

				num= rem + num;

				temp->data = temp->data / 10;
			}

			temp->data=num;
			printf("| %d |-->",temp->data);
			temp=temp->next;
		
		}
		printf("NULL");

	}

}

int countnode(){

	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}



void main(){

	int nodecount;

	printf("Enter the nodes u want to add  :  ");
	scanf("%d",&nodecount);

	for(int i=1;i<=nodecount;i++){
		addnode();

	}
	printf("\n%d nodes added..\n",nodecount);

	printDLL();

	printf("\nAfter addition of digit..\n");
	Digitadd();
	

	printf("\n\n");



}
