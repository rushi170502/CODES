

// WAP to implement the stack using array ..
//
  //1. push 
  //2. pop
  //3. peek
  //4. isFull
  //5. isEmpty
  

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int top = -1;

int size = 0;
int flag = 0;

bool isFull(){

	if(top == size - 1 )
		return true;
	else
		return false;

}


int push(int stack[]){

	if(isFull())
		return -1;
	
	else{
		int data;
		printf("\nEnter the data  :  ");
		scanf("%d",&data);

		top++;
		stack[top] = data;
	
		printf("\n%d added...\n",data);
		return 0;
	}
		

}

bool isEmpty(){

	if( top == -1)
		return true;
	else
		return false;

}

int pop(int stack[]){


	if(top == -1){
		flag = 0;

		printf("\nStack underflow...\n");
		return -1;
	}else{

		int val = stack[top];

		flag = 1;

		top--;

		return val;
	}

}

int peek(int stack[]){

	if(top == -1){

		flag = 0;
		return -1;
	}
	else{
		flag = 1;
		return stack[top];
	}

}

void main(){

	int ch;
	printf("\nEnter the size of stack  :  ");
	scanf("%d",&size);

	int stack[size];

	while(1){

		printf("\t!!******** M E N U ***********!!\n");
		printf("\t press 1 : push data\n");
		printf("\t press 2 : pop data\n");
		printf("\t press 3 : peek \n");
		printf("\t press 4 : isFull\n");
		printf("\t press 5 : isEmpty\n");
		printf("\t press 6 : exit\n\n");


		printf("\n Enter the choice  :  ");
		scanf("%d",&ch);

		switch(ch){

			case 1:{
				int ret = push(stack);
				if(ret == -1)
					printf("stack is overflow..\n");
			       }
				break;

			case 2:{
				int data = pop(stack);

				if(flag == 0)
					break;
				else{
					printf("\n%d is popped..\n\n",data);
				       }
			       }
				break;

			case 3:{
				int val	=peek(stack);
				if(flag == 0)
					printf("\n Stack is an underflow..\n");
				else
					printf(" %d  \n",val);
			       }
				break;

			case 4:{
				 bool ret= isFull();

				 if(ret)
					 printf("\nStack is overflow...\n");
				 else
					 printf("\nStack is not overflow...\n");
			       }
			       break;

			case 5:{
				 bool ret= isEmpty();
				 if(ret)
					 printf("\nStack is underflow...\n");
				 else
					 printf("\nStack is not underflow...\n");
			       }
			       break;				

			case 6:
				exit(0);
				break;

			default:
				printf("\nWrong choice....\n");

		}

		}
	}
				

