

// ADDITION of pointers...
//
#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	int *ptr1=&x;
	int *ptr2=&y;

	printf("Address of x= %p \n",ptr1);
	printf("Address of y= %p \n",ptr2);
	

//	printf("Addition is %d  \n",ptr1+ptr2);// Give error because of additio of pointers is not allowed..
	printf("Addition is %d  \n",*ptr1 + *ptr2);// Addition is perfromed by pointers by dereferencing..
}
