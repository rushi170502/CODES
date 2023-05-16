

// WAP to implement the stack using singly linked list...
//
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

int flag = 0;
int size =0;

node* top = NULL;


node *createnode(){

	node *newnode = (node *)malloc (sizeof(node));

	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);

	newnode->next =NULL;

	return newnode;
}

int elementcount(){

	int count = 0;
	if(top == NULL){
		
		return count;
	}
	else{
		
		node *temp = top;
		while( temp != NULL){
			count++;
			temp=temp->next;
		}

		return count;
	}
}
int push(){


	if(elementcount() == size ){
		flag=0;
		return -1;
	}
	else{
		node *newnode= createnode();


		if(top == NULL){

			top= newnode;
			flag = 1;
			return 0;
		}else{
			flag =1;
			node *temp=top;
			while(temp->next != NULL){
				temp=temp->next;
			}
			temp->next=newnode;

			return 0;
	           }
	}

}

int pop(){

	int data;
	if(top == NULL){
		flag = 0;
		return -1;
	}
	else{
		if(top->next == NULL){

			data=top->data;	
		        free(top);
			top = NULL;
			return data;
		}
		else{
			node *temp = top;
			while(temp->next->next != NULL){

				temp=temp->next;
			}
			data =temp->next->data;

			free(temp->next);
			temp->next = NULL;

			
		   }

		return data;
	}
}


int peek(){

	
	if(top == NULL){
		printf("\nStack is empty...\n");
		flag=0;
		return -1;
	}
	else{
		node *temp = top;
		while(temp->next != NULL){
			temp=temp->next;
		}
		int data=temp->data;
		flag=1;
		return data;

	}

}
void main(){

	int ch;

	printf("\nEnter the size of stack : ");
	scanf("%d",&size);

	while(1){

		printf("\t!!**********M E N U***********!!\n");
		printf("\tpress 1: push node\n");
		printf("\tpress 2: pop node\n");
		printf("\tpress 3: peek node\n");
		printf("\tpress 4: countnode\n");
		printf("\tpress 5: exit\n\n");

		printf("\nEnter the choice  :  ");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
					int ret = push();
					if(flag == 0)
						printf("stack is overflow...\n");
					break;
					
						
				}

				break;

			case 2:
				{
					int ret = pop();
					if(flag == 0)
						printf("stack is underflow..\n");
					else
						printf("%d popped..\n",ret);
				}
				break;

			case 3:
				{
					int ret = peek();
					if(flag==0)
						break;
					else
					printf("| %d |	\n",ret);

				}
				break;

			case 4:{
				       int count = elementcount();
				       printf("\nNode count is   : %d  \n\n",count);
			       }
			       break;

			case 5:
				exit(0);
				break;

			default:
				printf("\nWrong choice...\n");

		}

	}


}
