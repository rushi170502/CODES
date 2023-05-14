
// WAP to search the element from the array..
//
#include<stdio.h>
void main(){

	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements of array:  \n");
	for (int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int element;
	printf("Enter the element you want to search ?  \n");
	scanf("%d",&element);

	for(int i=0;i<size;i++){

		if(arr[i]==element){
			printf("Element is found..\n");
			
		   }
		else{
			printf("Element is not found...\n");
		
		}// in this for loop the element is found but the for loop is continue looping so we need to 
		 // stop the loop when element is found..
	}

}
	
