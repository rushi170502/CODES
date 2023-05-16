

// WAP to implement the stack using array ..
//
  //1. push 
  //2. pop
  //3. peek
  

#include<stdio.h>
#include<stdlib.h>

int top = -1;

int size = 0;

int push(int stack[]){

	if(top == size -1){
		printf("\nStack overflow....u can't push data\n");
		return -1;
	}
	else{
		int data;
		printf("\nEnter the data  :  ");
		scanf("%d",&data);

		top++;
		stack[top] = data;

		return 0;
	}
		

}

int pop(int stack[]){


	if(top == -1){

		printf("\nStack underflow...");
		return -1;
	}else{

		int val = stack[top];

		top--;

		return val;
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
		printf("\t press 4 : exit\n\n");

		printf("\n Enter the choice  :  ");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				push(stack);
				break;

			case 2:{
				int data = pop(stack);

				printf("\n%d is popped..",data);// here is problem after the stack is empty it guves a rreturn valu as -1;
								// but there is no return after satck is empty..
			       }
				break;
/*
			case 3:
				peek(stack);
				break;
*/
			case 4:
				exit(0);
				break;

			default:
				printf("\nWrong choice....\n");

		}

	}
				
}
