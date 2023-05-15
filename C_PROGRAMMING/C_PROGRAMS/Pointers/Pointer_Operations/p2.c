
#include<stdio.h>
void main(){
	char ch='A';
	char ch1='B';

	char *cptr1=&ch;
	char *cptr2=&ch1;

	printf("ch= %c\n",*cptr1);
	printf("ch= %c\n",*cptr2);
 	
	printf("%d\n\n",*cptr1 + *cptr2) ;// Addition of two char pointer is allowed in c so here
					  // Addition is 65+66=131


}
