//
//
// Comparing the two array with each other..
// without break;
//
#include<stdio.h>
void main(){

	int arr1[5]={10,20,30,50,40};

	int arr2[5]={10,20,30,50,40};

	if(arr1==arr2){
		printf("Array are equal  \n");
	}else{
		printf("Arrays are not equal..\n");
	}

}
// Here we cannot compare array directly to another array..
// so we need to compare array elements of another array...	

