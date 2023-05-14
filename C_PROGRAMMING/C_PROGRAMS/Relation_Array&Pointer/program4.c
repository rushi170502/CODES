

#include<stdio.h>
void main(){

	int arr1[]={10,20,30,40,50};
	int arr2[]={60,70,80,90,100};

	int *ptr1=arr1+1;// goes to next element of array

	int *ptr2=&arr1+1;// here if we increment the &arr then it increment the whole goes to next location  that's why it gives  or garbage value
			  // i.e it skips all array

	printf("%d\n",*ptr1);//20
	printf("%d\n",*ptr2);//0

}
