
// NULL pointer ;;
// it is use to avoid the segementation fault due to wild pointer i.e
// we initialise the wild pointer to the null so it is known as null pointer..
//
// it can declare by two ways =NULL or =0
//
#include<stdio.h>
void main(){

	int x=10;

	int *ptr=NULL;

	printf("%d\n",ptr);//0 i.e NULL
	printf("%p\n",ptr);
}
