
// Dangling pointer..
// dangling pointer is pointer which is globally declare and it stores the address of data 
// if pointer stores the address of x from other function..
// and after the function works and pop the pointer has reamin same address in theor box..
// there is no effect on address 
// and when we use this pointer in another functions it returns the old address and value.
//
//
#include<stdio.h>

int a=10;
int b;
int *ptr=NULL;//pointer is globally declare..

void fun(){

	 int x=30;

	 printf("%d\n",a);//10
	 printf("%d\n",b);//0

	 ptr=&x;//stores the address of x

	 printf("%d\n",*ptr);//30

}


void main(){

	int y=40;

	printf("%d\n",a);//10
	printf("%d\n",b);//0

	fun();

	printf("%d\n",*ptr);//30 beacuse dangling pointer store the old address that' why it returns the x=30

}
