
// Increment operation on pointers...
//
 #include<stdio.h>
void main(){

	int arr[]={10,20,30,40,50};
	int *ptr=&(arr[0]);

	printf("%d\n",*(ptr++));//
				//here 1st dereference the pointer is at 100 
				//thats why the ans is 10 after that the pointer is increment 

	printf("%d\n",*(++ptr));// after that increment the pointer is first increment and then
				// derefernce the pointer...i.e ans = 30


}
