

//	WAP TO PRINT FOLLOWING PATTERN...


/*
	*   *   *
	*   *   *
	*   *   *
	
*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the number of rows :   ");
	scanf("%d",&rows);
	printf("\nEnter the number of cols :    ");
	scanf("%d",&cols);

	for(int i = 1; i <= rows; i++){

		for(int j= 1; j <= cols; j++){

			printf(" *  ");
		}
		printf("\n");

	}

	printf("\n\n");
}


