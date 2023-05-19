

// WAP to implement the Queue using Linked list..
//
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;

}node;

node * front = NULL;
node * rear = NULL;

int count = 0;
int size = 0;
int flag = 0;
int flag1 = 0;


int countnode(){
	
  node *temp = front;
  while(temp != rear){
	  
	  count++;
	   temp = temp->next;
  }
  return count;
  
}

// creatintg a node in the linked list..
node * createnode(){

	node *newnode = (node *) malloc(sizeof(node));

	printf("\n Enter the data : ");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
	

}
// enqueue function in linked list..
int enqueue(){

	if(countnode() == size){
		return -1;
	}
	else{



		node *newnode = createnode();

		if(front == NULL){
			front = newnode;
			rear = newnode;
			newnode->next = front;
		}
		else{

			rear->next  = newnode;
			newnode->next = front;
			rear = newnode;
		}
		return 0;
	}
}

// dequeue function in linked list...
//
int dequeue(){

 	if(front == NULL){
		flag = 0;
		return -1;
	}
	else{
		flag = 1;

		int data = front->data;

		if(front->next == NULL){
			free(front);
			front = NULL;
			rear = NULL;
		}else{

			node *temp =front;

			front = front ->next;
			rear->next =front;
			free(temp);
		}
		return data;
	}

}

int frontt(){

	if(front == NULL){
		flag1 = 0;
		return -1;
	}else{
		flag1 = 1;
		return front->data;
	}
}

int printQueue(){

	if(front == NULL){
		return -1;
	}
	else{

		node *temp = front;
		while(temp->next != front){

			printf("| %d |",temp->data);
			temp=temp->next;
		}
		printf("| %d |",temp->data);

	}


}
void main(){

	int ch;

	printf("\nEnter the size of dequeue  :  ");
	scanf("%d",&size);

	

	while(1){

		printf("\n\t ************* M E N U ***************\n");
		printf("\tpress 1: Enqueue data\n");
		printf("\tpress 2: Dequeue data\n");
		printf("\tpress 3: Front \n");
		printf("\tpress 4: printQueue\n");
		printf("\tpress 5: Exit\n\n ");

		printf("Enter the choice : ");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				       int ret= enqueue();

				       if(ret == -1){
					       printf("\nQueue is overflow... you can't add node\n");
				       }
				}

				       break;

			case 2:{
				       int ret = dequeue();

				       if(flag == 0){

					       printf("\nQueue is underflow...\n");
				       }
				       else{
					       
				       		printf("%d dequeued...\n",ret);
			       		}

			       }

				       break;

			case 3: {
				       int data = frontt();
				       if(flag1 == 0){
					       printf("\nQueue is empty..\n");
				       }else{

				      		 printf("\n front = %d \n",data);
					}
				}
					break;

			case 4:{
				       int ret= printQueue();

				       if(ret==-1){
					       printf("\nQueue is empty...");
				       }
			       }
			       		break;

			case 5:
					exit(0);

			default:
					printf("\nwrong choice ...\n");

			}
	}

}
				       

		
				       
			       



