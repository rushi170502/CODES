
/*
 *   Pattern of ODD numbers...
 *
 	1    3    5
	7    9    11
	13   15   17

	*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the rows & cols  :  ");
	scanf("%d%d",&rows,&cols);
	int num=1;

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=cols;j++){

			if( num % 2 != 0){

				printf(" %d   ",num);
				num+=2;
			}

		}
		printf("\n");

	}

	printf("\n\n");

}
