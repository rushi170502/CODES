// Doubly linked list
//WAP to serach the first occurence of given element from user..
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

int firstoccurence(){

	int index=1;

	Node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty ...");
		return -1;
	}else{
		int key;
		printf("\nEnter the key u want to find its first occurence and position  :  ");
		scanf("%d",&key);
		int flag=0;

		while(temp != NULL){

			if(temp->data != key)
				 flag=0;

			if(temp->data == key){

				flag=1;	
				printf("\n %d has its first occurence at %d  ",temp->data,index);
				break;
			}
			index++;
			temp=temp->next;
		}

		if(flag==0){
			printf("\nkey element is not present..");
		}
		return 0;

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

	 firstoccurence();

	printf("\n\n");



}
