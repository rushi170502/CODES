
// WAP that searches the first occurrence of particular element which is given by user.
// from the linkedlist..

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;

}node;

node *head=NULL;

node *createnode(){

    node *newnode=(node*)malloc(sizeof(node));

    printf("\nEnter the data  :   ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    return newnode;
    

}
void addnode(){

	node *newnode=createnode();

	if(head==NULL){
		head=newnode;
	}else{

		node *temp=head;

		while(temp->next!=NULL){
			temp=temp->next;
		}

		temp->next=newnode;

	}
}

 void firstoccurence(){

	 int key;
	 int index=1;

	 printf("\nEnter the number you want search its first occurence :   ");
	 scanf("%d",&key);

	 if(head==NULL){
		 printf("\nList is empty..\n");
	 }
	 else{
		 node *temp=head;

		 while(temp!=NULL){
			 
			 if(temp->data==key){

				
				 printf("\n %d is at %d position ...\n\n",key,index);
				 break;
			 }
			 index++;
			 temp=temp->next;
		 }

	 }

 }



 void printdata(){

	node *temp=head;

	if(head==NULL){
		printf("\nList is empty....\n");
	}
	else{
		while(temp!=NULL){

		
			printf("| %d |-->",temp->data);
			temp=temp->next;
		}

		printf("NULL\n\n");
	}
 }

void main(){

	int no;
	printf("\nEnter the no. of nodes of nodes u want to add  :  ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++){
		addnode();

	
	}

	printdata();
	
	printf("\n First occurence of given number...\n");
	firstoccurence();

	printdata();

}


