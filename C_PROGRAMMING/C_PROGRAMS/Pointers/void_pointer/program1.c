

// Void pointer in C
//
// void pointer is also called as generic pointer..
// it stores the address of anyone in program..i.e char,int,double all datatypes...
//
// it has minimum size is 1 byte.
//
#include<stdio.h>
void main(){

	int x=10;

	int *ptr=&x;

	char *ptr1=&x;//warning: initialization of ‘char *’ from incompatible pointer type ‘int *’ [-Wincompatible-pointer-types]}


	printf("%d\n",*ptr);

	printf("%d\n",*ptr1);// here we can store the integer value in char pointer that's why it gives a warning..

}

