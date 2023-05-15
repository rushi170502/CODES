//
//  SUBTRACTION OF POINTERS..
//
  #include<stdio.h>
void main(){

	int arr[]={10,20,30,40,50};

	int *ptr1= &(arr[0]);
	int *ptr2= &(arr[3]);

	printf("%d\n",*ptr1);// 10
	printf("%d\n",*ptr2);// 40

	//Subtraction of pointers
	//
	printf("%ld\n",ptr2-ptr1);// Subtraction of two pointers is possible..
				 // ptr2-ptr1
				 // ---------
				 // sizeof(DTP)
				 //
				 // 112-100
				 //__________
				 //  4
				 //12/4
				 //=3
				 
				
				
	printf("%ld\n\n",ptr1-ptr2);// same as upper side..
				   // =-3

	// Addition of  Any two pointers is not allowed
	// Addition of one pointer and one integer is allowed...
	// Subtraction of any two pointer is allowed...
	// Subtraction of one pointer and one integer is allowed..
	//
	// Multiplication ,Division, Modulas, is not allowed is pointers.....
	//


}
