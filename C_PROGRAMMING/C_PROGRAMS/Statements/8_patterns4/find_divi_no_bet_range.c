

//	 WAP TO FIND THE NUMBER WHICH ARE DIVISIBLE BY 3 & 7 BEWTWEEN THE GIVEN RANGE
//

#include<stdio.h>
void main(){

	int start, end, flag=0;

	printf("\n Enter the range start & end   :   ");
	scanf("%d%d",&start,&end);
	for(int i = end; i >= start; i--){

		if(i % 3 == 0  &&  i % 7 == 0){
			
			printf("%d\t ",i);
		}
	}
	printf("\n\n");
}
