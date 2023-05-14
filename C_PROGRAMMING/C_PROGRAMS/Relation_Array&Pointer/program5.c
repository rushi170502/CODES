
// 2D array.....
//
#include<stdio.h>
void main(){

	int arr[]={1,2,3,4,5,6,7,8,9};

	for(int i=0;i<9;i++){
		printf("%d\n",arr[i]);

	}

	//2D array
	//int arr2[][]={1,2,3,4,5,6,7,8,9};// error =it incompactible elements 
					 // so we need to specify the rows and columns in 2d array
    printf("2D array elements  :\n");

    int arr2[3][3]={1,2,3,4,5,6,7,8,9};

	for(int i=0;i<3;i++){

		for(int j=0;j<3;j++){

		printf("%d  ",arr2[i][j]);

		}
		printf("\n");
	}
}
