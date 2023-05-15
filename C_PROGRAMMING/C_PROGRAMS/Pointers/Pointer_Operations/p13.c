
// Increment operation on pointers...
//
 #include<stdio.h>
void main(){

	int arr[]={10,20,30,40,50};
	int *ptr=&(arr[0]);

	printf("%p\n",ptr);//index 0 address

	printf("%d\n",(*ptr++));//10   unary operators has high priority...
				//here 1st dereference the pointer is at 100 
				//thats why the ans is 10 after that the pointer is increment 

	printf("%d\n",(*ptr++));// after that increment the pointer  and then
				// derefernce the pointer...i.e ans = 20

	printf("%d\n",(*++ptr));


}
