

//	WAP TO PRINT FOLLOWING PATTERN...


/*
	1  2   3   4 
	5  6   7   8
	9  10  11  12
	
*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the number of rows :   ");
	scanf("%d",&rows);
	printf("\nEnter the number of cols :    ");
	scanf("%d",&cols);
	int num=1;

	for(int i = 1; i <= rows; i++){
		

		for(int j= 1; j <= cols; j++){
			
			printf("  %d ",num);
			num++;
		}
		printf("\n");

	}

	printf("\n\n");
}


