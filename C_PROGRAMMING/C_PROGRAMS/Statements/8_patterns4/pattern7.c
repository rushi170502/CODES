

/*  
 
    A    A    A
    B    B    B
    C    C    C

    */

#include<stdio.h>
void main(){

	int rows,cols;
	printf("\nEnter the rows & cols  :   ");
	scanf("%d%d",&rows,&cols);
	getchar();
	char ch;
	printf("\nEnter the character u want start :  ");
	scanf("%c",&ch);

	for(int i = 1; i<= rows; i++){

		for(int j=1; j<=cols;j++){

			printf("  %c  ",ch);
		}
		ch++;
		printf("\n");

	}
	printf("\n\n");

}
