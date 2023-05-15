


// 
#include<stdio.h>
void main(){

	int x=10;

	int *ptr;

	ptr=&x;

	printf("%p\n",ptr);// give the address of x 

	printf("%d\n",*ptr);// 10

}
