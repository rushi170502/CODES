

#include<stdio.h>
void main(){

 	char ch1='x';
	char ch2 ='y';
	char ch3='z';


	char  *ptr1=&ch1;

	printf("%p \n",ptr1);// gives a address of x by 1 byte and next character 1 byte...
	printf("%c \n",*ptr1);

	printf("%p \n",(ptr1+1));
	printf("%c \n",*(ptr1+1));

	printf("%p \n",(ptr1+2));
	printf("%c \n",*(ptr1+2));

}

/*
 *   *( ptr1 + 1)
 *   ValueAt( 100 + 1 * sizeod(DTP))
 *
 *   ValueAt( 100 + 1 * 4)
 *
 *   ValueAt (104)  // 20
 *
 * */
