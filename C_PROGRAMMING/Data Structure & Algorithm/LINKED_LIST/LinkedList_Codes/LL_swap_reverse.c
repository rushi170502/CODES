
// WAP to reverse a linked list by using swap Function...using singly linked list
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;
	struct Node *next;

}node;

node *head = NULL;

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
	}
	return 0;

}

int rev_SLL_swap(){


	if(head == NULL){
		printf("\nLinked list is empty..\n");
		return -1;
	}

	else if(head->next == NULL){
		printf("\nNo need to swap the data..\n");
	}
	else{

		node *temp1 =head;
		node *temp2 =head;

		int count = nodecount();
		int num = count - 1;
		int cnt = count / 2;

		
		while(cnt){

			temp2=head;
			count = num ;

				while(count){

					temp2=temp2->next;
					count--;
				}
	
			int temp;

		// swap 
			temp = temp1->data;
			temp1->data = temp2->data;
			temp2->data = temp;

			temp1= temp1->next;
			cnt--;
			num--;


	      }

      }

}


int printSLL(){

	if(head == NULL){
		printf("\nLinked list is empty ...");
	}
	else{

		node *temp = head;

		while(temp != NULL){

			printf("| %d |-->",temp->data);
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

	printSLL();

/*	int count= nodecount();
	printf("%d\n",count);
*/
	printf("\nAfter reversing list : \n\n");
	rev_SLL_swap();
	printSLL();
	printf("\n");
}
