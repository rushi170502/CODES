
// pointer with array
//
#include<stdio.h>
void main(){

	int arr[5]={10,20,30,40,50};
       //print the array before the increment

       for(int i=0;i<5;i++){
	       printf("%d\t",arr[i]);
       }
       
	int *ptr=&(arr[0]);
	printf("\n%d\n",*ptr);

	(*ptr)++;//increment the value at pointer has..

        
	// print the array after increment
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\n");


}
