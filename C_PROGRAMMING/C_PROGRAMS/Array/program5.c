
// WAP to search the character from the array..
//
#include<stdio.h>
void main(){

	int size;
//	printf("Enter the size of array :");
//	scanf("%d",&size);

	char arr[]="Rushi";
/*	printf("Enter the elements of array:  \n");
	for (int i=0;i<size;i++){
		scanf("%c",&arr[i]);
	}*/

	char element;
	printf("Enter the character you want to search ?  \n");
	scanf("%c",&element);
        int flag=0;//it is use to signal that the element is found or not..
	for(int i=0;i<size;i++){

		if(arr[i]==element){
			flag=1;
			break;
		}
	}

	if(flag==1)
		printf("Element is found..\n");
	else
		printf("Element is not found..\n");
	
}
	
