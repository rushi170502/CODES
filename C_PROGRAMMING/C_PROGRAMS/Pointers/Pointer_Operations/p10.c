//
//Multiplication and division in pointers..
//
#include<stdio.h>
void main(){

	int arr[5]={10,20,30,40,50};

	int *ptr1=&(arr[0]);
	int *ptr2=&(arr[3]);


	printf("%ld\n",ptr2-ptr1);

	printf("%ld\n",ptr2*ptr1);// * is inavlid operands to binary...error


	printf("%ld\n",ptr1/ptr2);// / is inavlid operands to binary.... error..

	}
