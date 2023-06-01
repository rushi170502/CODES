
// WAP find factor and measuring the iteration of code


#include<stdio.h>

void fun(int n){

	int i= 1;// itr = 1
	while(i <= n){ // itr = N

		if(n % i == 0)//itr = 2N (two task  % & ==)
			printf("%d  ",i);// itr = N

		i++;// itr = 2N(two task i = i+1 ( +, =))

	}
}
		// total iteration : 
		// = 1 + N + 2N + N + 2N
		// = 1+ 6N

void main(){

	int n = 35;

	fun(n);
	printf("\n\n");
}
