
// doubly linked list  use delete function..
//
#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
       struct Node *prev;
       int data;
       struct Node *next;       
}node;

node *head=NULL;
int countnode();

node *createnode(){

   	node *newnode=(node*)malloc(sizeof(node));

	newnode->prev=NULL;

	printf("\nEnter the data:  ");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;


}

void addnode(){

	node *newnode=createnode();

	if(head==NULL){
		head=newnode;
	}
	else{
		node *temp=head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		temp->next=newnode;
		newnode->prev=temp;
	}

}

void printdata(){

	node *temp=head;

	if(head==NULL){
		printf("\nNo node exists...\n");
	}
	else{
		printf("NULL<--");
		while(temp!=NULL){

		printf("| %d |-->",temp->data);
		temp=temp->next;
	     }
	printf("NULL");
	}
	printf("\n\n");

}

void delfirst(){
     node *temp=head;
     int count=countnode();
     if(head==NULL){
	     printf("\nList is empty...\n");
     }
     else if(count==1){
	     free(head);
	     head=NULL;
     }
     else{
	     temp->next->prev=NULL;
	     head=temp->next;
	     free(temp);
     }
	   

     printf("\nFirst node deleted...\n");

}

void dellast(){

	node *temp=head;

	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	printf("\nLast node deleted..\n");

}

int delatpos(){

	node *temp=head;
	if(head==NULL){
	  printf("Linked list is empty...");       
	}
	
 	else{
	
		int pos;
	 	printf("\nEnter the position u want to delete node :");
		 scanf("%d",&pos);

		 int count=countnode();

		 if(pos<=0 || pos>=count+2){
			 printf("\nInvalid position..\n");
		 	 return -1;
		 }else if(pos == 1){
			 delfirst();
		 }else if(pos == count){
			 dellast();
		 }
		 else{
			 node *temp=head;

			 while(pos-2){
				 temp=temp->next;
				 pos--;
			 }

			 node *temp1=temp->next->next;
			 free(temp->next);
			 temp->next=temp1;
		 }

	} 
    }
	


int countnode(){
	int count=0;
	node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void main(){

	int no;
	printf("\nEnter the number of nodes  :  ");
	scanf("%d",&no);

	for(int i=0;i<no;i++){
		addnode();
	
	}
	printf("%d nodes inserted...\n",no);
	printf("\n");
	printdata();

	printf("\nDeleting first node..\n");
	delfirst();
	printdata();

	printf("\nDeleting last node...\n");
	dellast();
	printdata();

	printf("\nDeleting node at specific position..\n");
	delatpos();
	printdata();
	
 }
