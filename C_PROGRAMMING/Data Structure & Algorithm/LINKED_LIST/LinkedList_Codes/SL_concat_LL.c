
// WAP to concat the the one linked list to another...
//
//  1. concat the whole 2nd linked list to 1st linked list
//  2. concat the first n number of nodes to list
//  3. concat the last n number of nodes given by user..
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

node * head1= NULL;
node * head2= NULL;

int count_nodes();

node * createnode(){

	node *newnode= (node *)malloc(sizeof(node));

	printf("\nEnter the data  :   ");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;

}

int addnode(node **head){

	node *newnode =createnode();

	if(*head == NULL){
		*head=newnode;
	}
	else{
		node *temp=*head;

		while(temp->next != NULL){
			temp=temp->next;
		}

		temp->next=newnode;
		return 0;

	}
}

// concat whole linked list to one list

int concat_WLL(){

	node *temp=head1;

	while(temp->next != NULL){
		temp=temp->next;
	
	}

	temp->next = head2;

	return 0;
}


// concat n no. of nodes to linked list..

 int concat_last_n_nodes(){

	int count= count_nodes();
	int num;
	printf("\nEnter how many last nodes u want to concat :  ");
	scanf("%d",&num);

	int cnt = count-num;

	if(num <=0 || num > count+1){

		printf("\nInvalid number of nodes.. : ");
		return -1;
	}
	else{

		node *temp1= head1;

		while(temp1->next != NULL){
			temp1=temp1->next;
		}
		
		node *temp2=head2;

		while(cnt){
			temp2=temp2->next;
			cnt--;

		}

		temp1->next=temp2;
	}

	printf("\nLast %d  nodes concatenated...",num);

	return 0;


}

 int concat_first_n_nodes(){

	 int count=count_nodes();

	 int num;
	 printf("\nEnter first no. of nodes u want to concat  : ");
	 scanf("%d",&num);

	 int cnt=count-num;
	
	 if(num <= 0 || num > count+1){
		 printf("\nInvalid number ...\n");
		 return -1;
	 }
	 else{
		 node *temp1= head1;

		 while(temp1->next != NULL){
			 temp1=temp1->next;
		 }

		 node *temp2= head2;

		 while(cnt-1){

			 temp1->next =temp2;
			 temp1=temp1->next;

			 temp2=temp2->next;
			 cnt--;
		 
		 }

		        temp2->next=NULL;
		   //temp2=NULL;

		 printf("\nFirst %d nodes concatenated...\n",num);

		 return 0;
	 }
 }



// Count function

int count_nodes(){

	int count=0;
	node *temp= head2;

	while(temp != NULL){
		
		count++;
		temp=temp->next;
	}
	return count;
}


int print_LL(node *head){

	node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty..");
		return -1;
	}
	else{
		while(temp->next != NULL){
			printf("| %d |-->",temp->data);
			temp=temp->next;
		}
		printf("| %d |-->NULL\n\n",temp->data);
		return 0;

	}
}

 
void main(){

	int ch;

	while(1){


		printf("\n\t*******M E N U**********\n");
		printf("\tPress 1: Addnode to linked list 1\n");
		printf("\tPress 2: Addnode to linked list 2\n");
		printf("\tPress 3: concat whole linked list\n");
		printf("\tPress 4: concat n last nodes to LL 1\n");
		printf("\tPress 5: concat n first nodes to LL 1\n");
		printf("\tPress 6: print linked list 1\n");
		printf("\tPress 7: print linked list 2\n");
		printf("\tPress 8: print linked list after concatenation\n");
		printf("\tPress 9: count nodes \n");
		printf("\tPress 10: exit\n\n");

		printf("\nEnter the choice :  " );
		scanf("%d",&ch);

		switch(ch){

		case 1:
			{
			  int nodes1;
			  printf("\nEnter the no. of nodes to linked list 1 : ");
			  scanf("%d",&nodes1);

			  for(int i = 1; i <= nodes1; i++){
				  addnode(&head1);
			  }
			  printf("\n%d nodes addeed...\n",nodes1);
			}
			break;
		case 2:			
			{
			  int nodes2;
			  printf("\nEnter the no. of nodes to linked list 2 : ");
			  scanf("%d",&nodes2);

			  for(int i = 1; i <= nodes2; i++){
				  addnode(&head2);
			  }
			  printf("\n%d nodes addeed...\n",nodes2);
			}
			break;

		
	       case 3:{		
			concat_WLL();
			printf("\nLinked list concatenated.....\n");
		      }
			break;


	       case 4: 
			concat_last_n_nodes();
			break;

	       case 5:
			concat_first_n_nodes();
			break;


	       case 6:
			print_LL(head1);
			break;

	       case 7:
			print_LL(head2);
			break;

		case 8:
			print_LL(head1);
			break;

		case 9:
			count_nodes();
			break;

		case 10:

			exit(0);
			break;

		default:
			printf("\nWrong choice...\n");
		}

	}
}

