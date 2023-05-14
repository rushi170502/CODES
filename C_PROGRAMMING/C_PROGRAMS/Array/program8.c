// Assigning  the array to another array...
//
#include<stdio.h>
void main(){

	int arr1[5];
 	printf("Enter the elements : \n");

	for(int i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Entered elements of array 1 are :\n");

	for(int i=0;i<5;i++){
		printf("%d\n",arr1[i]);
	}

	// Assigning one array to another array;
	//
	int arr2[5];

	arr2=arr1 ;// Error:  Assignment to expression to array type

	for(int i=0;i<5;i++){
		printf("%d\n",arr2[i]);
	}
}
