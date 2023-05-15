//
//use of pointer passing to another functions..
//

#include<stdio.h>
void fun(int* a){

	*a=*a+10;
	printf("%d\n",*a);//20
 

}

void main(){

	int x=10;
 	int *ptr=&x;
	fun(ptr);// pointer is passed to the fun function as pointer..

	printf("%d\n",x);//20

}
