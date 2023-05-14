//
// WAP to accept the array elements by user and print all elements
//
#include<stdio.h>
void main(){
        int size;
	printf("\n Enter the size of array:\n ");
	scanf("%d",&size);

	int arr[size];
       printf("Enter the elements of array: \n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

       printf("Elements of array are: \n ");

       for(int i=0;i<size;i++){
	       printf("%d\n ",arr[i]);
       }
      }
