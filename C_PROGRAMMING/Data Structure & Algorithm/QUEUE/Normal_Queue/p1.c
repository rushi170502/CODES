
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
int flag =0;
node *head = NULL;

node *createnode(){


	node *newnode =(node *)malloc(sizeof(node));

	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);

	int prior;
	do{
		printf("\nEnter priority  :  ");
		scanf("%d",&prior);
	

	}while(prior >= 5 || prior <= 0);


	newnode->priority = prior;

	newnode->next = NULL;

	return newnode;

}


int addnode(){

	node *newnode = createnode();

	if(head == NULL){

		head= newnode;
	}	
	
	else if(head->next == NULL && head->priority >  newnode->priority){
			
		
				head->next = newnode;
			}
	else if(head->priority < newnode->priority){
			
				newnode->next = head;
				head=newnode;
	
	
	}else{
		node *temp=head;

				while(temp->next->priority >= newnode->priority){
					temp=temp->next;

					if(temp->next == NULL)
						break;

				}
				newnode->next =temp->next;
				temp->next = newnode;

			}
	}


int deletefirst(){


	if(head == NULL){
		flag =0;
		return -1;

	}else{
		flag= 1;

		if(head->next == NULL){
			free(head);
			head = NULL;
		}else{

			node *temp= head;
			int data = head->data;
			head =head->next;
			free(temp);
			return data;

		}


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

			case 2:{
				       int data = deletefirst();
				       if(flag==0){

					       printf("\n LL is empty..\n");
				       }else{

					       printf("\n%d deleted...\n",data);
				       }
			       }
			       break;
			      
			
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
