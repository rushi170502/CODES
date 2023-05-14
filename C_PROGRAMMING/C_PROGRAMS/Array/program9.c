//
//WAp to copy the one array elements to another array
//
#include<stdio.h>
void main(){

	int arr1[5]={10,20,30,40,50};

	printf("\n Array 1 elements are:\n" );
	for(int i=0;i<5;i++){
		printf("%d\n",arr1[i]);
	}

	// creating a second array..
	int arr2[5];

	for(int i=0;i<5;i++){

		arr2[i]=arr1[i];// copying elements of one array to another..
	}
  	printf("Array 2 Elments are:  \n");
	for(int i=0;i<5;i++)
		printf("%d\n",arr2[i]);

}
