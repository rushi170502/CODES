

// WAP to use bubble sort in given array by user..
//
#include<stdio.h>

int bubble_sort(int *arr,int size){

	for(int i= 0;i<size-1;i++){

		for(int j=0;j<size-i-1;j++)

		if(arr[j] > arr[j+1]){

			int temp= arr[j];
			arr[j]=arr[j+1];
			arr[j+1] = temp;
		}
	}

}

void main(){

	int size;
	printf("\nEnter the array size:  ");
	scanf("%d",&size);
	
	int arr[size];

	printf("\nEnter the elements of array  : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("\nBefore sorting... : ");
	for(int i=0;i<size;i++){

		printf("%d  ",arr[i]);
	}
		
	bubble_sort(arr,size);


	printf("\nAfter sorting... : ");
	for(int i=0;i<size;i++){

		printf("%d  ",arr[i]);
	}
		
	printf("\n\n");


}
