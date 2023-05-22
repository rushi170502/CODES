
// WAP to sort the strings of array in which sort the array sort by their no. of characters...
//
#include<stdio.h>
#include<string.h>

int count(char str[]){

	int cnt=0; 
	while(*str != '\0'){
		cnt++;
		*str++;
	}
	return cnt;

}

int sortArray(int size, int arr[],char str[][50]){


	for(int i=0;i< size ;i++){

		int num1 = count(str[i]);

		arr[i] = num1;

	}



}

void main(){

	int size;

	printf("\nEnter the size of array  : ");
	scanf("%d",&size);

	char str[size][50];

	printf("\nEnter the strings :  \n");

	for(int i = 0;i<size;i++){

		scanf("%s",str[i]);
		getchar();
	}

	
	printf("\nArray before of sorting :  \n");
	for(int i= 0; i < size ; i++){
		printf(" %s    ",str[i]);
	}

	int arr[size];
	sortArray(size,arr,str);


	printf("\nArray after of sorting :  \n");
	for(int i= 0; i < size ; i++){
		printf(" %d    ",arr[i]);
	}

	printf("\n\n");

	

}
