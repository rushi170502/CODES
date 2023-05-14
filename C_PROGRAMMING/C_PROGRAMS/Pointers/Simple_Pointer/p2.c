#include<stdio.h>
void main(){
	int x=10;

	printf("x =  %d \n",x);//10
	printf("x =  %p\n",&x);//adddress

	int *ptr=&x;
	printf("ptr = %d \n",ptr);//Address
	printf("Ptr= %d\n",*ptr);//addresss
}
