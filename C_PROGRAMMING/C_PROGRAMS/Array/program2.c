//
// WAP to accept the character array and print that array...
//
#include<stdio.h>
void main(){

	int size;
//	printf("Enter the size of array  : \n");
//	scanf("%d",&size);

       char charr[5];
	printf("Enter the characters of array:  \n");
       for(int i=0;i<5;i++){
	       scanf("%c",&charr[i]);
	     }

       printf("Elements of charater array are  :");

       for(int i=0;i<5;i++){
	       printf("%c\n",charr[i]);
	      }

      }
