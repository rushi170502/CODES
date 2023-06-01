
// Find the iteration and time complexity


#include<stdio.h>

void main(){

	int N = 4 ,M=5;

	for(int i = 1; i <= N; i++){
		printf("%d\n" ,i);
	}

	for(int i = 1; i <= M; i++){
		printf("%d",i);

	}
}

// total iteration :  1st for = 1 + N + N + N
// 				= 1+ 3N
// 		      2nd for = 1 + M + M + M 
// 		      		= 1 + 3M()
//
// 		      	= 2 + 3N + 3M(ignore coefficient and constant)
// 		      	= N + M
//
//	Time complexity : O(N+M) or O(max(N,M))
