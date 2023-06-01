
// Q . what is the return value of function when it called as foo(345,8)

#include<stdio.h>

int foo(int n , int r){

	if(n > 0)// Recursive function call
		return (n%r + foo(n/r,r));
	else
		return 0;
}

void main(){

	int x = 345,y=8;

	int ret = foo(x,y);

	printf(" %d \n\n",ret);
}
