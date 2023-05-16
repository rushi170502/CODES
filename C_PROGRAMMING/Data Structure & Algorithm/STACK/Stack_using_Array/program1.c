//
//  WAP TO IMPLEMENT STACK USING AN ARRAY.....
//

#include<stdio.h>

int top = -1;

int arr[5];


int push(int data){

   top++;
   arr[top]=data;


}
void main(){

//	printf("\n Adding elemets to array  :  ");

	push(30);
	push(40);
	push(50);

	for(int i = top; i >= 0; i--){

	printf("| %d |",arr[i])	;
	}

	printf("\n\n");

}



