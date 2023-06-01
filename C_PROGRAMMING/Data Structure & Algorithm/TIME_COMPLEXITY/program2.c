
// Find the iteration of code :

#include<stdio.h>

void fun(int N){

	for(int i =1 ; i <= 5; i++){ // itr = 1 + 5 + 6

		for(int j = 1; j<= N; j++){ // itr = 5 + N + N
		
		}
		for(int k = 1; k <= N ; k++){// itr = 5 + N + N

		}
	}
}
		// total iteration : = 5
		// 		     = 5 (N * N)
		// 		     =  5N^2

void main(){

	fun(10);
}
