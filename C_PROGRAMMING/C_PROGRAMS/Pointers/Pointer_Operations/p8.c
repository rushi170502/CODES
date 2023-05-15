

// Addition of charcter pointers,,,,,
//
//
#include<stdio.h>
void main(){


	char carr[]={'A','B','C','D'};

	char *ptr1=&carr[2];
	char *ptr2=&carr[3];

	printf("%c\n",*ptr1);//C
	printf("%c\n",*ptr2);// D

	printf("%c\n",*(ptr1+2));// segmentation Fault..
				 // *(ptr1 + 2 )
				 // *(ptr1 + 2 * sizeof(DTP))
				 // *(102 +2 * 1)
				 // ValueAT(104)
				 // Garbage value or NULL

	printf("%c\n\n",*(ptr2+1));// same as previous..

}
