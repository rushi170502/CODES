
/*   WAP TO PRINT FOLOWING PATTERN...
 
     a   b   c   d 
     e   f   g   h
     i   j   k   l

    */

#include<stdio.h>
void main(){

	int rows,cols;

	printf("\nEnter the rows & cols  :    ");
	scanf("%d%d",&rows,&cols);
	char ch='a';

	for(int i = 1; i <= rows;i++){

		for(int j = 1; j <= cols; j++){

		printf("  %c  ",ch);
		ch++;
	}
		printf("\n");

	}
}



