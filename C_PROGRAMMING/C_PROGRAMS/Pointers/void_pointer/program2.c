
// Void pointer using typecasting...
//
//
#include<stdio.h>
void main(){

	int x=10;
	int *iptr=&x;
	void * vptr=&x;

	printf("%d\n",*iptr);

//	printf("%d\n\n",*vptr);// here void pointer cammot derefrence the pointer so we need 
//	to use typecasting for that
//
      // typecasting..
	printf("\n%d\n\n",*((int*)vptr));


}
