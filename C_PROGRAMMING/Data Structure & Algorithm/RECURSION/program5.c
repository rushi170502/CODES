//
// Q . What is tyhe output?

#include<stdio.h>

 void print(int n){

	 if(n > 4000)
		 return ;
	 printf("%d \n",n);
	
	 // recursive call
	
	 print(2 *n);

	 printf("%d \n",n);
 }

void main(){

	print(1000);

}
