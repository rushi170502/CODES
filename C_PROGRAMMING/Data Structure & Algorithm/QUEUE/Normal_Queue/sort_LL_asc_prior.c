
// WAP to add node in ascending order...
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	int priority;
	struct Node *next;

}node;

int flag1=0;
node *head = NULL;
//node *temp2 = head;

node *createnode(){


	node *newnode =(node *)malloc(sizeof(node));

	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);

/*	int prior;
	do{
		printf("\nEnter priority  :  ");
		scanf("%d",&prior);
	

	}while(prior >= 5 || prior <= 0);

*/
//	newnode->priority = prior;
	printf("\nEnter the prriority :  ");
	scanf("%d",&newnode->priority);

	newnode->next = NULL;

	return newnode;

}


int addnode(){

	node *newnode = createnode();

	if(head == NULL){

		head= newnode;
		return newnode->data;
	}else{


		node *temp = head;

		while(temp->next != NULL){
		
			if(temp->priority >=  newnode->priority){
			
				if(temp->next->priority > newnode->priority){

					newnode->next = temp->next;
					temp->next = newnode;
				}
				
			}

			else if(temp->priority <= newnode->priority){
			
				newnode->next = head;
				head=newnode;
	
			}
			/*else if( temp->priority > newnode->priority){


				newnode->next =temp;

				temp= newnode;
			}*/

			else{
				while(temp->next != NULL && temp->next->priority > newnode->priority){
					temp=temp->next;
				}

				newnode->next = temp->next;
				temp->next = newnode;
			}	
		}
			temp->next = newnode;
			temp= temp->next;

		}

			
	}



int printLL(){

	if(head == NULL){
		flag1=0;
		return -1;
	}
	else{
		flag1= 1;
		node *temp2=head;
		while(temp2->next != NULL){

			printf("| %d |",temp2->data);

			temp2= temp2->next;

	}
		printf("| %d |\n\n",temp2->data);

	}

}

void main(){

	int ch;

	while(1){

		printf("\t************M E N U************\n");
		printf("\tpress 1 : addnode to linked list\n");
		printf("\tpress 2 : delete first node\n");
		printf("\tpress 3 : print LL\n");
		printf("\tpress 4 : exit\n\n");

		printf("\nEnter the choice  : ");
		scanf("%d",&ch);

		switch(ch){

			case 1:{
				       int data = addnode();
				//       printf("\n%d added...\n",data);
			       }
			       break;

	/*		case 2:{
				       int data = deletefirst();
				       if(flag==0){

					       printf("\n LL is empty..\n");
				       }else{

					       printf("\n%d deleted...\n",data);
				       }
			       }
			       break;
			       */
			
			case 3:{
				       int ret = printLL();
				       if(flag1 == 0){
					       printf("\nLL is empty...\n");
				       }

				}
				       break;
			
			case 4:
			       exit(0);

			default:
			       printf("\nWrong choice....\n");


		}

	}		
}
