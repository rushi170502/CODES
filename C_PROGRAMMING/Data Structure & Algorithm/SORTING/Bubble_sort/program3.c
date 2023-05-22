// WAP to sort the string by using the its characters....
//
#include<stdio.h>

void main(){

	int size;
	printf("Enter the size of array :  ");
	scanf("%d",&size);

	char carr[size][20];

	printf("Enter the string name:  ");
	
	char ch;
	
	for(int i=0;i< size;i++){

	/*	int j=0;

		while((ch== getchar()) != '\n'){

			carr[i][j]=ch;
			j++;
		}
		*/

		scanf("%s",&carr[i]);
	
	}

	printf("\nStrings before sorting..: ");

	for(int i=0;i<size;i++){
		printf("%s  \n",carr[i]);
	}
}
