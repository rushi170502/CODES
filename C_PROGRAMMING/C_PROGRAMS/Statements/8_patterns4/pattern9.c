
/*
 *   Pattern of ODD numbers...
 *
 	1   2   3   4
	a   b   c   d
	5   6   7   8
	e   f   g   h


	*/

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the rows & cols  :  ");
	scanf("%d%d",&rows,&cols);
	int num=1;
	char ch='a';

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=cols;j++){

			if( i % 2 != 0){

				printf(" %d   ",num);
				num++;
			}

			else{
				printf(" %c   ",ch);
				ch++;
			}


		}
		printf("\n");

	}

	printf("\n\n");

}
