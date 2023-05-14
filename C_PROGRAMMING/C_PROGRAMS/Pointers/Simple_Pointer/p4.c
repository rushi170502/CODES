//
//Dereferencing the pointers....
//
#include<stdio.h>
void main(){
	int x=10;

	int *ptr=&x;
	int *ptr2=x;

	printf("%d   \n",x);//10
	printf("%p   \n",x);// address of x
	printf("%p   \n",ptr);//address of ptr1
	printf("%d   \n",*ptr);//value of ptr1
	printf("%p   \n",ptr2);
	printf("%d   \n\n",*ptr2);

}
