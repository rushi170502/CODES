
// WAP that searches the add the digits of particular number which is given by user.
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

 void adddigit(){


	 if(head==NULL){
		 printf("\nList is empty..\n");
	 }
	 else{
		 node *temp=head;

		 int rem;
		
		 while(temp!=NULL){

			int num=0;

			 while(temp->data!=0){

				 rem=temp->data % 10;

				 num = rem+num;

				 temp->data=temp->data/10;

			 }

			 temp->data=num;

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
		printf("\n");
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
	
//	printf("\n All occurence of given number...\n");
	adddigit();
	printdata();

}


