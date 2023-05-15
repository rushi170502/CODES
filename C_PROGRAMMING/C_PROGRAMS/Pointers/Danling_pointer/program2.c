//
//char 
#include<stdio.h>
char ch='A';
char ch1;

char * cptr=0;//or null

void fun(){

  char ch3='X';

  printf("%c\n",ch);
  printf("%c\n",ch1);

  cptr=&ch3;// assign the addres of ch3

  printf("%c\n",*cptr);

}


void main(){

	char ch2='B';

	printf("%c\n",ch);
	printf("%c\n",ch1);

	fun();

	printf("%c\n\n",*cptr);// it stores the old address therefore we get old answer..
}
