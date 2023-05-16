// Doubly linked list
//WAP to serach the all occurences of given element from user..in a doubly linked list
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

int Alloccurences(){

	Node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty ...");
		return -1;
	}else{
		int key;
		printf("\nEnter the key u want to find its all occurences  :  ");
		scanf("%d",&key);
		int flag=0;
		int count =0;

		while(temp != NULL){

			if(temp->data == key){

				flag=1;

				count++;
			}
			

			temp=temp->next;
		}

		if(flag==0){
			printf("\nkey element is not present..");
		}
		else{
			printf("\n %d has its all occurences  %d  times  \n",key,count);
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

	Alloccurences();

	printf("\n\n");



}
