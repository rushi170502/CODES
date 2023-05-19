// LINEAR SEARCH

// WAP to find last occurence of an element from the given array...
//
#include<stdio.h>


int lastocc(int *arr,int size,int key){

	int store = -1;

	for(int i = 0; i < size; i++){

		if(arr[i] == key){

			store = i;
		
		}

	}
		return store;


}

int main(){


	int size;
	int key;

	printf("\nEnter the size of array :  ");
	scanf("%d",&size);

	int arr[size];

	printf("\nEnter the elements of array : ");

	for(int i=0;i<size;i++){
	   scanf("%d",&arr[i]);
	}

	printf("\nEnter the key to search an element : ");
	scanf("%d",&key);

	int retval = lastocc(arr,size,key);

	if(retval == -1){
		printf("%d is not found ...\n",key);
	}
	else{
		printf("\n%d is found at %d index..\n",key,retval);
	}

}
