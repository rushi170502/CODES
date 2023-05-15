
// Void pointer using typecasting...
//
//
#include<stdio.h>
void main(){

	float x=188.250;
	float *iptr=&x;
	void * vptr=&x;

	printf("%f\n",*iptr);

//	printf("%d\n\n",*vptr);// here void pointer cammot derefrence the pointer so we need 
//	to use typecasting for that
//
      // typecasting..
	printf("\n%f\n\n",*((float*)vptr));


}
