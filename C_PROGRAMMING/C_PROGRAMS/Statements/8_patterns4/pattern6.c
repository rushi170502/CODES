

//	WAP TO PRINT FOLLOWING PATTERN...


/*
	9   8   7
	6   5   4  
	3   2   1
	
*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the number of rows :   ");
	scanf("%d",&rows);
	printf("\nEnter the number of cols :    ");
	scanf("%d",&cols);

	int num;
	printf("\nEnter the number u want to start  :   ");
	scanf("%d",&num);

	for(int i = rows; i >= 1; i--){

		for(int j= 1; j <= cols; j++){

			printf("  %d  ",num);
			num--;
		}
		printf("\n");

	}

	printf("\n\n");
}


