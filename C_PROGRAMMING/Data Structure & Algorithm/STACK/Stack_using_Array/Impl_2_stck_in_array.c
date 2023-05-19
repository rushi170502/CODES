//
//
//Implement 2 stack in array...
//
#include<stdio.h>
#include<stdlib.h>

int size =0;
int top1 = 0;
int top2 = 0;
int flag1=0;
int flag2=0;


int push1(int *arr){

	if(top1 == top2){
		return -1;
	}
	else{
		top1++;
		printf("\nEnter the data  :   ") ;
		scanf("%d",&arr[top1]);

		return 0;
	}

}

int push2(int *arr){


	if(top1 == top2){
		return -1;
	}
	else{
		top2--;
		printf("\nEnter the data :  ");
		scanf("%d",&arr[top2]);

	}
	
}

int topp1(int *arr){

	return top1;

}

int topp2(int *arr){
	return top2;
}

int pop1(int *arr){

	if(top1 == -1){// top1 <= 0 || top2 >= size

		flag1=0;
		return -1;
	}else{
		int data= arr[top1];
		top1--;
		flag1 =1;

		return data;
	}

}


int pop2(int *arr){

	if(top1 == size){// top1 <= 0 || top2 >= size

		flag2=0;
		return -1;
	}else{
		int data= arr[top2];
		top2++;
		flag2 =1;

		return data;
	}

}



void main(){

	printf("\nEnter the array size :  ");
	scanf("%d",&size);

	int arr[size];
	int ch;

	top1=-1;
	top2= size-1;

	while(1){


		printf("\t!!***************M E N U*************!!\n");
		printf("\tpress 1: push1 data in stack 1\n");
		printf("\tpress 2: push2 data in stack 2\n");
		printf("\tpress 3: pop data in stack 1\n");
		printf("\tpress 4: pop data in stack 2\n");
		printf("\tpress 5: print top 1\n");
		printf("\tpress 6: print top 2\n");
		printf("\tpress 7: exit.\n\n");

		printf("\nEnter the choice : ");
		scanf("%d",&ch);

		switch(ch){


			case 1:{
				       int data= push1(arr);
				       if(data == -1){
					       printf("\n Stack 1 overfloww...\n");
				       }
			       }
			       break;

			case 2:{
				       int ret= push2(arr);
					       if(ret == -1){
						       printf("\nStack 2 is overflow...\n");
					       }
			       }
			       break;

			case 3:{
				       int ret= pop1(arr);
				       if(flag1 == 0){
					       printf("\nStack 1 is underflow....");

				       }else{
					       printf("\n %d popped from stack 1\n",ret);
				       }
			       }
			       break;


			case 4:{
				       int ret= pop2(arr);
				       if(flag2 == 0){
					       printf("\nStack 2 is underflow....");

				       }else{
					       printf("\n %d popped from stack 2\n",ret);
			                }
			       }
			       break;

			case 5:{
			      		 int ret =topp1(arr);
			     	 	 printf("top 1 = %d\n",ret );
			       }
			       break;

			case 6:{
				       int ret =topp2(arr);
				       printf("\ntop 2 = %d\n",ret);
			       }
			       break;


			case 7:
			       exit(0);

			default:
			       printf("\nWrong choice\n\n");



		}

	}



}
