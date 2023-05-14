//

#include<stdio.h>
void main(){

	int arr[5]={10,20,30,40,50};

	int *ptr1= arr;// here array name has same address  and it is the address of its first element
	int *ptr2= &arr;// it also store same address 

	ptr1++;//(ptr1++)
	       //(100 +1 *4 )
	       //(104)


	ptr2++;//(ptr2++)
	       //(100+ 1*4)
	       //(104)

	printf("%d\n",*ptr1);//20  
			     //valueAT(104)
			     //20

	printf("%d\n",*ptr2);// 20
			     // valueAt(104)

}


