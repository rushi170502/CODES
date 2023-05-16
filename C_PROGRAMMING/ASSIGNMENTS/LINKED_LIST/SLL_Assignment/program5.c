
// WAP that searches the the linked list its consists of palindrome number or not if yes the print

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

void palindrome(){

//	int remainder,reversed=0;


	if(head==NULL){
		printf("\nLinked list is empty..\n");
	}
	else{

		node *temp=head;
		int index=1;

		while(temp!=NULL){

			int remainder,reversed=0;

		        int num= temp->data;

			while(num != 0){

				remainder = num  % 10;

				reversed = reversed * 10 + remainder;

				num = num / 10;
				
				
			}

			if(temp->data == reversed){
				printf("\n palindrome %d  found at position  %d \n ",temp->data,index);
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

		printf("NULL\n");
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
	
	printf("\nPalindrome number.....\n");
	palindrome();

//	printdata();

}


