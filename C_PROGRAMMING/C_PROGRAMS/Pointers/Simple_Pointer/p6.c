// Declaration of varaibles in globally and locally...
//
#include<stdio.h>

int x=200;
char ch ='B';

void main(){

	int y=10;
	int *ptr1=&x;
	char *ptr2=&ch;
	int *ptr3=&y;

	printf("%p  \n",ptr1);
	printf("%d  \n",*ptr1);

	printf("%p \n",ptr2);
	printf("%c  \n",*ptr2);

	printf("%p  \n",ptr3);
	printf("%d  \n",*ptr3);

}
