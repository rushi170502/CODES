//
//WAP to check the elements of array which are divisible by 4 & 5..
//
#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements of array : \n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int i,flag=0;

	for(int i=0;i<size;i++){

		if(arr[i] % 4 == 0 && arr[i] %  5 == 0){
			flag=1;
			printf("%d is divisible by 4 & 5 \n",arr[i]);
			break;
		}
		else
			printf("Element is not found..\n\n");
	}

/*	if(flag==1)
		printf("%d  is divisible by 4 & 5  \n",arr[i]);
	else
		printf("\nElement is not found..\n");
*/
}

