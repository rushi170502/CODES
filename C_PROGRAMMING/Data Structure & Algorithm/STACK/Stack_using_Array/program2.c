

// WAP to implement stack using array  input given by user...
//
// push function...
//
#include<stdio.h>

int top = -1;
int size = 0;


int push(int stack[]){  // (int *stack){

	if(top == size - 1){
		printf("\nStack overflow  u can't push data..\n");
		return -1;
	}
	else{

		int data;
		printf("\nEnter the data  : ");
		scanf("%d",&data);

		top++;

		stack[top]=data;

		return 0;

	}

}


void main(){

	printf("\nEnter the size pf stack  :  ");
	scanf("%d",&size);

	int stack[size];

	// call push function..
	for(int i = 0; i< size	;i++){

		push(stack); 
	}

	/*
	printf("\n stack elements are  : \n ");
	for(int i = 0 ;i<size;i++){
		printf("| %d |", stack[i]);
	}
	*/


}
