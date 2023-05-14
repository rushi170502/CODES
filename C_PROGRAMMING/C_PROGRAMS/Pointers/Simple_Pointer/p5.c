

#include<stdio.h>
void main(){
	int x=10;
	char ch='A';

	int *ptr1=&x;
	char *ptr2=&ch;

	printf("x=  %d \n",*ptr1);
	printf("ch=  %c \n",*ptr2);

 	
	printf("Address x=  %p \n",ptr1);
	printf("Address ch=  %p \n",ptr1);
}


