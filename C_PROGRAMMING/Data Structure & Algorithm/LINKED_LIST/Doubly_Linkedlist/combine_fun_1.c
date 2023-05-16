
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
int countnode();

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
	printf("\nOne node inserted...");

}

int addlast(){

	addnode();
	printf("\nOne node inserted...");
}

 int addatpos(){

       int pos;
       printf("\nEnter the position u want to add node  :  ");
       scanf("%d",&pos);

       int count = countnode();// call the count function to check how many nodes are present..

       if(head == NULL){
	       printf("\n Doubly linked is empty..");
	       return -1;
       }else{

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
				printf("\nOne node inserted...");
             		 }
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

 int delnode(){
	 dellast();
 }

 int delfirst(){

	int count=countnode();
	 if(head==NULL){
		printf("\nNo node exists...\n");
		return -1;
	 
	 }
	 else if(count==1){
		free(head);
		head=NULL;
	 }
	 else{
		 node *temp=head;
		 head=temp->next;
		 temp->next->prev=NULL;

		 free(temp);
		 printf("\nOne node deleted.....\n");
	 }
	 
 }

int dellast(){
       
  node *temp=head;
  int count=countnode();
  if(head==NULL){
	  printf("\nNo node to delete..");
	  return -1;
  }
  else{
	  if(count==1){
		  delfirst();
	  }
	  else {
		  while(temp->next->next != NULL){
			  temp=temp->next;
		  }
		  free(temp->next);
		  temp->next=NULL;
		  }

		printf("\nlast node deleted...");
		}
	}

int delatpos(){

	if(head == NULL){
		printf("Doubly linked is empty..");
		return -1;
	}
	else{
		int count = countnode();
		int pos;
		printf("\nEnter the position u want to delete node  :   ");
		scanf("%d",&pos);

		if(pos <= 0 || pos >count+1){
			printf("\nInvalid position...");
		}
		else if( pos == 1){

			delfirst();
		}
		else if(pos == count){
			dellast();
		
		}
		else{
			 node *temp=head;

			 while(pos - 2){
				 temp=temp->next;
				 pos--;
			 }
			 
			 temp->next=temp->next->next;
			 free(temp->next->prev);
			 temp->next->prev=temp;
		}
	}

}

			 



void main(){

	int ch,nodes;
	char choice;

	do{
		printf("\t\t\n***********MENU**********\n\n");
		printf("\tPress 1: Addnode to list\n");
		printf("\tPress 2: Addnode to first of list\n");
		printf("\tPress 3: Addnode to last of list\n");
		printf("\tPress 4: Addnode to specific position\n");
		printf("\tPress 5: Deletenode from list\n");
		printf("\tPress 6: Delete first node from  list\n");
		printf("\tPress 7: Delete last node from list\n");
		printf("\tPress 8: Delete node from specific position\n");
		printf("\tPress 9: Print the list\n");

		printf("Enter the choice :   ");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
				printf("\nHow many nodes u want create :  ");
				scanf("%d",&nodes);
				for(int i=1;i<=nodes;i++){
					addnode();
				}
				printf("%d nodes inserted...\n",nodes);
				}
				break;

			case 2:
				addfirst();
				break;

			case 3:
				addlast();
				break;

			case 4:
				addatpos();
				break;

			case 5:
				delnode();
				break;
			case 6:
				delfirst();
				break;

			case 7:
				dellast();
				break;

			case 8:
				delatpos();
				break;

			case 9:
				printdata();
				break;

			default:
				printf("\nWrong choice...\n");

		}
		getchar();
		printf("\nDo you want to continue....(y/n)");
		scanf("%c",&choice);

	}while(choice=='y' || choice=='Y');

	printf("\n");
}

