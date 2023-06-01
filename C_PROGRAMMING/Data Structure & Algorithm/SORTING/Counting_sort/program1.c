
// Count sort( only for positive numbers)

#include<stdio.h>

void countSort(int *arr, int size){

	// find max from array :
	int max= arr[0];
	for(int i = 0; i<size; i++){

		if(max < arr[i])
			max = arr[i];
	}

	// create new array 
	
	int countArr[max+1];

	for(int i = 0; i<=max; i++){

		countArr[i] = 0;
	}

	// count the elements
	
	for(int i = 0; i < size ;i++)
		countArr[arr[i]]++;
	
	// cummulative sum
	
	for(int i = 1 ; i <=max ;i++){

		countArr[i] = countArr[i] + countArr[i-1];

	}

	// create new array
	
	int output[size];

	for(int i = size - 1; i >= 0; i--){

		output[countArr[arr[i]] - 1] = arr[i];
		countArr[arr[i]]--;
	}

	// copy to original array
	
	for(int i = 0 ; i < size; i++)
		arr[i] = output[i];

}

void main(){

	int size ;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("\nEnter the elements of array  : \n");
	for(int i = 0; i<size; i++)
		scanf("%d",&arr[i]);
	
	printf("\nArray elements before sorting : ");
	for(int i = 0; i<size; i++)
		printf("%d  ",arr[i]);

	countSort(arr,size);

	printf("\nArray elements after sorting : ");
	for(int i = 0; i<size; i++)
		printf("%d  ",arr[i]);


	printf("\n\n");
}
