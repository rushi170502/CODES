

// WAP to implement stack using array  input given by user...
//
// push function...
//
#include<stdio.h>

int top = -1;
int size = 0;


int push(char stack[]){  // (int *stack){

	if(top == size - 1){
		printf("\nStack overflow  u can't push data..\n");
		return -1;
	}
	else{

		char data;
		printf("\nEnter the character  : ");
		scanf(" %c",&data);

		top++;

		stack[top]=data;

		return 0;

	}

}


void main(){

	printf("\nEnter the size pf stack  :  ");
	scanf("%d",&size);

	char stack[size];

	// call push function..

	push(stack);
	push(stack);
	push(stack);
	push(stack);// here we can go above given size of stack so its gives a msg stack overflow...

	printf(" %c \n",stack[top]);


}
