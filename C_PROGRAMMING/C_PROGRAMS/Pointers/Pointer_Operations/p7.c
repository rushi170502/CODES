

// SUBTRACTION OF POINTERS.....
//

#include<stdio.h>
void main(){

	int arr[]={10,20,30,40,50};

	int *ptr=&arr[1];

	printf("%d\n",*ptr);// It gives a value at index 1 =20

	printf("%d\n",*(ptr+2));// It gives a 40 which is at index 3
				// *(ptr+2)
				// *(104+2*sizeof(DTP))
				// *(104+2*4)
				// ValueAt(112)
				// =40
				//

}
