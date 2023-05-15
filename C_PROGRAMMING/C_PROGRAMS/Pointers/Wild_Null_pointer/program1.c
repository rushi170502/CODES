//
// Wild pointer,,,it is a very dangerous pointer which directly gives a segmentation fault 
// so it is use very carefully
// wild pointer means it is declare but not initialisation..
// so it sees anywhere in the process that why it segentation fault occurs..
//
#include<stdio.h>

void main(){

	int x=30;

	int *ptr;

	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
