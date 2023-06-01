
// WAP and find the iterations and find time complexity

#include<stdio.h>

void main(){
		
	  int N = 40; // 1
	  int sum =0; // 1
	 for(int i = 1; i <= N;i++){ // 1 + N + N

		 sum = sum + i; // 2N
	 }

	 printf("%d\n",sum);// 1
			  
	 //total iteration : 1 + 1 + 1 + N + N + 2N + 1
	 //		   = 4 + 4N
	 // Time complexity : O(N)  
}
