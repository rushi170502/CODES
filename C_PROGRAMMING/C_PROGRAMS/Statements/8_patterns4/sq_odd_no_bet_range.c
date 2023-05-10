

// WAP TO PRINT THE SQI=UARE OF ODD NUMBER BETWEEN THE GIVEN RANGE...
// NY THE USER..
//
 
#include<stdio.h>
void main(){


	int start, end, square=0;
	int flag =0;

	printf("\nEnter the range start & end  :  ");
	scanf("%d%d",&start,&end);

	for(int i = start; i<= end; i++){

		if( i % 2 != 0){

			square = i * i;
			printf("%d\t",square);
		}else{
			flag = 0;
		}

	}
	printf("\n\n");

}

