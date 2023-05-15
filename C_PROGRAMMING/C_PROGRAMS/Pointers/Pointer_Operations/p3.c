

#include<stdio.h>
void main(){

	int x=10;
	int y=20;

	int *ptr1=&x;

	printf("%d \n",*ptr1);

	printf("%d \n",*(ptr1 + 1));// Addition is performed because of pointers allows usn to addition of one pointer and an integer...
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
