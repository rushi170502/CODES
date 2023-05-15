
// Void pointer using typecasting...
//
//
#include<stdio.h>
void main(){

	char ch='A';
	char *cptr=&ch;
	void * vptr=&ch;

	printf("%c\n",*cptr);

//	printf("%d\n\n",*vptr);// here void pointer cammot derefrence the pointer so we need 
//	to use typecasting for that
//
      // typecasting..
	printf("%d\n\n",*((char*)vptr));// we typecast the void pointer into character...


}
