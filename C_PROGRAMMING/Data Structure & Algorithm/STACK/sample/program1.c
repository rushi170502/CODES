

#include<stdio.h>
void main(){

	int size;
	printf("\nEnter the size of array  :   ");
	scanf("%d",&size);

	int arr[size];
	int sum=0;

	for(int i = 0 ; i < size ; i++){

		scanf("%d",&arr[i]);
		sum= sum + arr[i];
	}

	printf("\nArray elements are  :\n ");
	for(int i = 0; i < size ; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\n Sum = %d \n",sum);

}
 
