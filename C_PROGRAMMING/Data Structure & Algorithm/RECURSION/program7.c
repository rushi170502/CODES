// 
// Q .predict the output of following program.


#include<stdio.h>

int fun(int n){

	if(n <= 1)
		return 1;

	if(n % 2 == 0)
		return fun(n/2);


	return fun(n/2)+ fun(n/2 +1);
}

void main(){

	int n = 11;

	int ret = fun(n);
	printf("%d\n\n",ret);
}

// o/p : 5
