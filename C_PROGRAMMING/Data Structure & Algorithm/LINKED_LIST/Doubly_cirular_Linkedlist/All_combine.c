

// WAP to implement doubly circular linked list..
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node * prev;

	int data;

	struct Node *next;

}Node;


Node *head=NULL;

int countnode(){

	Node *temp=head;

 	int count;

	while(temp->next != head){

		count++;
		temp=temp->next;

	}

	return count+1;

}

Node *createnode(){

	Node *newnode = (Node *) malloc (sizeof(Node));

	newnode->prev = NULL;

	printf("\nEnter the data :  ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;

}

int addnode(){


	Node *newnode=createnode();

	if(head == NULL){

		head=newnode;
		newnode->prev=head;
		newnode->next=head;
	}
	else{
		Node *temp = head;

		while(temp->next != head){
			temp=temp->next;
		}

		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = head;
		head->prev = newnode;

		/* without temp
		 
		   head->prev->next=newnode;
		   newnode->next=head;
		   newnode->prev=head->prev;
		   head->prev = newnode;

		   */
	}
	return 0;

}

int addfirst(){

	Node *newnode= createnode();

	if(head == NULL){

		head = newnode;
		newnode->prev = head;
		newnode->next = head;

	}
	else{

		newnode->next = head;
		newnode->prev=head->prev;
		head->prev=newnode;
		head=newnode;
		head->prev->next=head;
	

	}

	return 0;

}


int addatpos(){

	int pos;
	printf("\nEnter the position u want add node :  ");
	scanf("%d",&pos);

	int count=countnode();

	if(pos <= 0 || pos > count+1){
		printf("\nInvalid position..");
		return -1;
	}
	else{
		if(pos == 1)
			addfirst();
		else if(pos == count+1)
			addnode();

		else{

			Node *newnode=createnode();
			Node *temp=head;

			while(pos-2){

				temp= temp->next;
				pos--;
			}


			newnode->next=temp->next;
			newnode->prev =temp;
			temp->next->prev=newnode;
			temp->next=newnode;

		}
		return 0;
	}
}



int delnode(){

	if(head == NULL){
		printf("\nLinked list is empty..\n");
		return -1;
	}

	else{
		if(head->next == head){
			free(head);
			head = NULL;
		}

		else{
			head->prev=head->prev->prev;
			free(head->prev->next);
			head->prev->next =head;
			}

			return 0;
		}
	}


 int delfirst(){

	if(head ==  NULL){
       		printf("\nLinked list is empty..");
		return -1;
	}
	else{
		if(head->next == head){
			free(head);
			head= NULL;
		}
		else{

			head = head->next;
			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next=head;
		}

		return 0;
	}

 }


 int delatpos(){

	 int pos;
	 printf("\nEnter the position u want to delete node  :  ");
	 scanf("%d",&pos);

	 int count=countnode();

	 if(pos <= 0 || pos > count){
		 printf("Invalid position....\n");
		 return -1;

	 }
	 else{

		 if( pos == 1)
			 delfirst();

		else if( pos == count)
			delnode();

		else{
			Node *temp =head;

			while(pos-2){

				temp=temp->next;
				pos--;
			}

			temp->next =temp->next->next;
			free(temp->next->prev);
			temp->next->prev=temp;
		}

		return 0;
	 }

 }








int printDCLL(){

	Node *temp=head;

	if(head == NULL){
		printf("\nLinked list is empty...");
		return -1;
	}
	else{
		
		while( temp->next != head){

			printf("| %d |-->",temp->data);
			temp=temp->next;
		}

		printf("| %d |-->NULL\n",temp->data);

	}


}


void main(){

	  int ch;

	  while(1){

		  printf("\n\t*********M E N U*************\n");
		  printf("\tPress 1: Addnode\n");
		  printf("\tPress 2: Add node at First\n");
		  printf("\tPress 3: Addnode at position\n");
		  printf("\tPress 4: Delete node\n");
		  printf("\tPress 5: Delete First node\n");
		  printf("\tPress 6: Delete at position\n");
		  printf("\tPress 7: print linked list\n");
		  printf("\tPress 8: countnode\n");
		  printf("\tPress 9: exit\n");

		  printf("\n Enter the choice  : ");
		  scanf("%d",&ch);

		  switch(ch){


			  case 1:
				  {
					  int nodecount;
					  printf("\nEnter the no. of nodes u want to add :  ");
					  scanf("%d",&nodecount);

					  for( int i=1;i<=nodecount;i++){
						  addnode();
					  }
					  printf("\n %d nodes added....\n",nodecount);

				  }
				  break;

			 case 2:{
				  addfirst();
				  printf("\n node added at first successfully \n");
				}
				  break;

		    	 case 3: {
				  addatpos();
				  printf("\n node add at position given by u successfully\n");
				 }
				  break;

			 case 4:{
				  delnode();
				  printf("\n Delete last node successfully...\n");
				}
				  break;

		 	 case 5:{

				  delfirst();
				  printf("\ndelete first node successfully...\n");
				}
			       	break;

			 case 6:{
				  delatpos();
				  printf("\ndelete node at position successfully...\n");
				}
				  break;

			 case 7:
				  printDCLL();
				  break;
			
			 case 8:
				  {
					  int count=countnode();
					  printf("\n %d nodes are present\n",count);
				  }
				  break;

		        case 9:
				  exit(0);
				  break;

			default:
				  printf("\nWrong choice \n");

		  }

	  }
}
