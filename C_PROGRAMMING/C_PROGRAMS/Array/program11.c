//
//Comparing array to another array using break staement..
//
#include<stdio.h>
void main(){
	int arr1[5]={10,20,30,40,50};
	int arr2[5]={10,20,30,40,50};

	int flag=0;
	
	for(int i=0;i<5;i++){
		if(arr1[i]==arr2[i]){
			flag=1;
			break;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("\nArrays are equal..\n");
	else
		printf("\nArrays are not equal...\n");

// Here all elements of both array are compare with each other and all elements are match 

}
