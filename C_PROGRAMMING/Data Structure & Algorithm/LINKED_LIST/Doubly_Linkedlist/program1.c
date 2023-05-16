
// Doubly linked list 
//
//functions on Doubly linked list..

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node *prev;//storing the address of previous self ref. structure 
	int data;
	struct Node *next;

}node;
node *head=NULL;

node *createnode(){

	node *newnode=(node*)malloc(sizeof(node));

	newnode->prev=NULL;

	printf("\nEnter the data  :  ");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;
}

int addnode(){

	node *newnode=createnode();

	if(head==NULL)
		head=newnode;
	else{
		node *temp=head;
		while(temp->next!=NULL){

			temp=temp->next;
		}

		temp->next=newnode;
		newnode->prev=temp;
	}

}

int addfirst(){

	node *newnode=createnode();

	if(head==NULL)
		head=newnode;
	else{
		newnode->next=head;// store the address of head into newnode->next
		head->prev=newnode;// store the address of newnode into previous of head  
		head=newnode;

	}

}

int addlast(){

	addnode();
}

 int addatpos(){

       int pos;
       printf("\nEnter the position u want to add node  :  ");
       scanf("%d",&pos);

       int count = countnode();// call the count function to check how many nodes are present..

       if(pos<=0 || pos>=count+2){
	       printf("\nInvalid position..");
	       return -1;
       }
       else if(pos==count+1){
	       addlast();
       }
       else if(pos==1){
	       addfirst();
       }
       else{
	       node *temp=head;
	       node *newnode=createnode();
	        while(pos-2){
			temp=temp->next;
			pos--;
		}

		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next->prev=newnode;
		temp->next=newnode;
       }

 }

 int countnode(){

	 
	int count=0;
	node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

 void printdata(){

	 node *temp=head;
	 if(head==NULL){
		 printf("\nNO node exists..\n");
	 }
	 else{

	 printf("NULL <--");
	 while(temp!=NULL){
		 printf("| %d |-->",temp->data);
	
	 temp=temp->next;
	}
	 printf("NULL\n\n");
	}
 }
 








void main(){

	int nodes;
	printf("\n Enter the no. of nodes  :  ");
	scanf("%d",&nodes);

	for(int i=1;i<=nodes;i++){
		addnode();
	}

	printf("\n\n");

	printdata();

	printf("\nAdd node at first position ...");

	addfirst();

	printdata();

	printf("\nAdd node at last position..");
	
	addlast();
	printdata();
	
	printf("\nAdd node at specific location..");
	addatpos();
	printdata();

	addatpos();
	printdata();

	addatpos();
	printdata();






}


