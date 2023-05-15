


// Assigning the value to the pointer..
 
#include<stdio.h>
void main(){

	int x=10;
	
	printf("%d\n",x);

	int *iptr=&x;

	printf("%d\n",*iptr);//10

	*iptr=30;  // assigning the value of 30 to pointer chya box madhe
			// if we do not use pointer then its gives a segmentation fault..
		// it overwrite the previous data with new data	
	printf("%d\n",*iptr);// 30

}
