

// Assigning the one value to another variable..

#include<stdio.h>
void main(){

	int x=10,y;

	printf("%d\n",x);// value of x =10

	printf("%d\n",y);// garbage value..or 0

	y=x;

	printf("%d\n",x);
	printf("%d\n",y);// now value is change because of assigning value of x to y..

}
