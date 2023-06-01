
// Q. What does the function does..

#include<stdio.h>

void fun(int n){

	if(n == 0)
		return ;
	printf("%d ",n%2);

	// recursive call
	fun(n/2);
}

void main(){

	int n = 25;

	fun(n);
}
