//
// Find the no. of iterations and Time complexity

#include<stdio.h>

void main(){

	int N = 10;
	int i = N;

	while(i > 1){

		i = i / 2;
	}
}

// total iteration :  =  1 + 1 + N + log(N)
// 		      = log(N)
//
// Time complexity : 	O(log(N))
