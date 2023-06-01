// Recursion  : FIND THE OUTPUT OF PROGRAM AND GUESS O/P?

#include<stdio.h>

int fun(int n){

	if(n == 4)
		return n;// 16
	else
		return 2 * fun(n+1);
}


void main(){

	printf("%d \n",fun(2));
}
