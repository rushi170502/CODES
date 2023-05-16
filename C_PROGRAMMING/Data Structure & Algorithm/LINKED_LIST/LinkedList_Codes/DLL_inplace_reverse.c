
// WAP to reverse a linked list by using inplace reverse Function...
// using doubly linked list
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	struct Node *prev;
	int data;
	struct Node *next;

}node;

node *head = NULL;

int printDLL();
int DLL_rev_inplace();

int nodecount(){

	int count=0;
	 
	node *temp= head;
	while(temp->next != NULL){

		count++;
		temp=temp->next;
	}

	return count+1;

}
node *createnode(){

	node *newnode = (node *)malloc (sizeof(node));
	
	newnode->prev=NULL;

	printf("\nEnter the data  :  ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}


int addnode(){

	node *newnode = createnode();

	if(head == NULL)
		head=newnode;
	else{
		node *temp= head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev= temp;
	}
	return 0;

}

int DLL_rev_inplace(){

	if(head == NULL){
		printf("\nLinked list is empty..\n");
		return -1;
	}

	else if(head->next == NULL){
		printf("\nNo need to reverse the data..\n");
	}
	else{
			node *temp=head;

		while(head != NULL){
		
			// inplace reverse function..
			temp=head->prev;
			head->prev=head->next;
			head->next=temp;
			if(head->prev == NULL)
				break;
			head=head->prev;
		}
     		
	}
}



int printDLL(){

	if(head == NULL){
		printf("\nLinked list is empty ...");
	}
	else{

		node *temp = head;
		
	printf("NULL<--");
	while(temp != NULL){

		printf("| %d |<-->",temp->data);
			temp = temp->next;
		}
		printf("NULL\n\n");

		return 0;

	}

}



void main(){

	int countnodes;
	printf("\nEnter the count of nodes u want to add  :  ");
	scanf("%d",&countnodes);

	for(int i = 1; i <= countnodes; i++){
		addnode();
	}
	printf("\n %d nodes added...\n",countnodes);

	printDLL();

/*	int count= nodecount();
	printf("%d\n",count);
*/
	printf("\nAfter reversing list : \n\n");

	DLL_rev_inplace();
	printDLL();
	printf("\n");
}
