
// MERGE SORT USE ON ARRAY ...
// IT IS DIVIDE AND CONQUER PROBLEM
//
//
#include<stdio.h>

// for sort the elements of array
void merge(int *arr,int start,int mid, int end){

	int element1 = mid - start + 1;
	int element2 = end- mid;

	int array1[element1],array2[element2];

	//for copy data in another arrays
	
	for(int i=0;i< element1;i++){

		array1[i] = arr[start+i];
	}

	for(int j=0;j<element2;j++){

		array2[j] = arr[mid+1+j];
	}

	int itr1 = 0, itr2 = 0 , itr3 = start;
	while(itr1 < element1 && itr2 < element2){

		if(array1[itr1] < array2[itr2]){

			arr[itr3] = array1[itr1];
			itr1++;
		}else{

			arr[itr3] = array2[itr2];
			itr2++;
		}

		itr3++;

	}

	while(itr1 < element1){

		arr[itr3] = array1[itr1];
		itr1++;
		itr3++;
	}

	while(itr2 < element2){

		arr[itr3] = array2[itr2];
		itr2++;
		itr3++;
	}

}


//for dividing the whole array
void merge_sort(int *arr,int start,int end){


	if(start<end){

		int mid =(start + end) / 2;

		merge_sort(arr,start,mid);

		merge_sort(arr, mid+1,end);

		merge(arr,start,mid,end);
	}

		
}




void main(){

	int size;

	printf("\nEnter the size of array :\n ");
	scanf("%d",&size);

	int arr[size];

	printf("\nEnter the array elements : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("\nArray before sorting :\n");
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}


	int start = 0,end =size-1;

	merge_sort(arr,start,end);

	printf("\nArray after sorting  :\n ");
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}

	printf("\n\n");

}
