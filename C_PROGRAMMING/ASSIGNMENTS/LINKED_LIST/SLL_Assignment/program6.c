
// WAP that searches the the linked list its consists of palindrome number or not if yes the print

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
        char str[20];
	struct Node *next;

}node;

node *head=NULL;

node *createnode(){

    node *newnode=(node*)malloc(sizeof(node));

    printf("\nEnter the data  :   ");
    scanf("%s",&newnode->str);

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

void findstringlen(){

	int len;

	if(head==NULL){
		printf("\nLinked list is empty..\n");
	}
	else{

		printf("\nEnter the length: ");
		scanf("%d",&len);

		node *temp=head;

		while(temp!=NULL){

			if(strlen(temp->str)==len)
			{
				printf("| %s |\n",temp->str);
			}
			else{
				printf("\nString is not present ..\n");
			}
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

		
			printf("| %s |-->",temp->str);
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
	
	findstringlen();
//	printdata();

}


