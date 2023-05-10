

//	WAP TO PRINT FOLLOWING PATTERN...


/*
	4   4   4   4
	3   3   3   3
	2   2   2   2
	1   1   1   1
	
*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the number of rows :   ");
	scanf("%d",&rows);
	printf("\nEnter the number of cols :    ");
	scanf("%d",&cols);

	for(int i = rows; i >= 1; i--){

		for(int j= 1; j <= cols; j++){

			printf("  %d  ",i);
		}
		printf("\n");

	}

	printf("\n\n");
}


