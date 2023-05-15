//
//
//  WAP to add the pointer and float values 
//
#include<stdio.h>
void main(){

	char ch1='A';
	char ch2='B';
	char ch3='C';

	printf("%c\n%c\n%c\n\n",ch1,ch2,ch3);

	char *ptr=&ch1;

/*	printf("%p\n",ptr);// address something
	printf("%c\n",*ptr);// dereference we get A

	printf("%p\n",(*ptr+1.5f));// Inavlid openrands use ..give error
	printf("%c\n"*(ptr+1.5f)); 
*/


	printf("%p\n",(ptr+'A'));// it returns the address
	printf("%c\n\n",*(ptr+'A'));// segmentation fault
				    //
				    //*(ptr+'A')
				    //*((100+ 65 * sizeof(DTP))
				    //*(100+65*1)
				    //ValueAt(165)
				    //it gives Segmentation Fault....



	// In the pointer only and only the addition of pointer and interger is allowed...
	// otherwise not allowed ie, pointer+pointer
	// pointer+char
	// pointer+float
	
}
