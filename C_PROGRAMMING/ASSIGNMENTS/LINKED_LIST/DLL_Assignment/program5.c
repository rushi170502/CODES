// Doubly linked list
//WAP to find the palindrome datain a node in a doubly linked list and print palindrome
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

int palindrome(){

	Node *temp=head;

	int index=1;
	if(head == NULL){
		printf("\nLinked list is empty ...");
		return -1;
	}else{
		

		while(temp != NULL){
			
			int num=temp->data;
			int rev=0,rem;

			while(num != 0){

				rem =num % 10;

				rev= rev * 10 + rem;

				num = num / 10;
			}

			if(temp->data == rev){
				printf("\n palindrome %d is found at %d position",temp->data,index);
			}
			index++;
			temp=temp->next;
		
		}
	

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

	printf("\nAfter finding palindrome");
	palindrome();
	

	printf("\n\n");

	printDLL();

}
