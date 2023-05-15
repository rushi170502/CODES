
// Singly-Circular linked list..
//
 // All functions such as createnode, addnode ,addfirst, addlast, addatposition
 //
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

node * head = NULL;

int countnode();

node * createnode(){

	node *newnode= (node *) malloc (sizeof(node));

	printf("\nEnter the data :  ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;

}
int addnode(){

	node *newnode = createnode();

	if(head == NULL){
		head = newnode;
		newnode->next=head;
	}

	else{
		node *temp=head;

		while(temp->next != head){

			temp=temp->next;
		}

		temp->next=newnode;
		newnode->next=head;

	}

	return 0;
}

int addfirst(){

	node *temp=head;

	node *newnode = createnode();

	if(head == NULL){

		head=newnode;
		newnode->next=head;

	}
	else{
		while(temp->next != head){

			temp = temp->next;
		}
		newnode->next = head;
		head = newnode;
		temp->next = head;
	}

	printf("\none node inserted at first...");
}

int addlast(){
	addnode();
}

int addatpos(){

	int pos;

	int count=countnode();

	printf("\nEnter the position you want to add node  :  ");
	scanf("%d",&pos);

	if( pos <= 0  || pos > count +1){
		printf("\nInvalid position...");
		return -1;
	}
	else{

		if(pos == 1){

		     addfirst();
		}
		else if(pos == count + 1){
			
			addlast();
		}
		else{

			node *newnode = createnode();

			node *temp = head;

			while(pos-2){

				temp = temp->next;
				pos--;
			}

			newnode->next=temp->next;

			temp->next=newnode;

		}

		return 0;
	}

}



		
int countnode(){

	node *temp = head;
	int count=0;

	if(head == NULL){
		printf("\nLinked is empty..");
		return -1;
        }
	else{
		
	
		while(temp->next != head){

			count++;
			temp=temp->next;
	       
		}
		count++;
	
	}

	return count;
}


void printSCLL(){

	if(head == NULL){
		printf("\nLinked list is empty...");
	}
	else{
		node *temp=head;

		while(temp->next != head){

			printf("| %d |--> ",temp->data);
			temp=temp->next;
		}
		printf("| %d |\n",temp->data);

	}
	
}



void main(){

	int ch;

	while(1){

		printf("\n\t**********M E N U*********\n\n");

		printf("\tPress 1: addnode\n");
		printf("\tPress 2: addfirst\n");
		printf("\tPress 3: addatpos\n");
		printf("\tPress 4: addlast\n");
		printf("\tPress 5: printdata\n");
		printf("\tPress 6: countnodes\n");
		printf("\tPress 7: Exit\n");

		printf("\nEnter your choice :  ");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
					int nodecount;
					printf("Enter how many nodes you want to add  :  ");
					scanf("%d",&nodecount);
					for(int i=0 ;i< nodecount;i++){
						addnode();
					}
					printf("\n%d nodes added...",nodecount);

				}
					break;

			case 2:
					addfirst();
					break;

			case 3:
					addatpos();
					break;

			case 4:
					addlast();
					break;
	
		        case 5:
					printSCLL();
					break;

			case 6: {
					int count=countnode();
					
					printf(" linked list contain %d nodes . ",count);
					printf("\n\n");
				}


			case 7: 
					exit(0);
					break;

			default: 
					printf("\nWrong choice...");


		}

	}

}

