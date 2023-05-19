

// WAP to implement the Queue using array
//
#include<stdio.h>
#include<stdlib.h>

int size =0;
int flag=0;
int flag1=0;

int front = -1;
int rear = -1;

int enqueue( int *arr){


	int data;
	if(front == -1){
		front++;
		rear++;
	}
		
	else{
		if((rear == size -1 && front == 0) || rear == front -1){
		
			return -1;
		
		}
		else {
			if( rear == size -1 && front != 0){
			rear = -1;
		    }
		}

		rear++;
	}


	printf("\nEnter the data : ");
	scanf("%d",&data);

	arr[rear]= data;

}

int dequeue(int *arr){


	if(front == -1){
		flag = 0;
		return -1;
	}
	else{
		flag = 1;
		int data = arr[front];

		if(front == rear ){
			front = -1;
			rear = -1;
		}else{
			if( front == size -1){
			front =-1;
			}
		front ++;
		}
		

		return data;
		
		
	}
}

int frontt ( int *arr){

	if(front == -1){
		flag1 =0;
		return -1;
	}
	else{

		flag1 =1;
		return  arr[front];
				
	}
}
int printQueue(int *arr){

	if(front == -1){
		return -1;
	}
	else{
		if( front <= rear){

			for(int i = front; i<= rear;i++){

				printf("| %d |",arr[i]);
			}
		}
		else{


			if(front > rear){
				for(int j = front ; j <= size-1; j++){
					printf("| %d |",arr[j]);
				}
				for(int k = 0; k <= rear;k++){
					printf("| %d |",arr[k]);
				}

			}

		}
		printf("\n\n");

	}
	
}

void main(){

	int ch;

	printf("\nEnter the size of dequeue  :  ");
	scanf("%d",&size);

	int arr[size];

	while(1){

		printf("\n\t ************* M E N U ***************\n");
		printf("\tpress 1: Enqueue data\n");
		printf("\tpress 2: Dequeue data\n");
		printf("\tpress 3: Front \n");
		printf("\tpress 4: printQueue\n");
		printf("\tpress 5: Exit\n\n ");

		printf("Enter the choice : ");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				       int ret= enqueue(arr);

				       if(ret == -1){
					       printf("\nQueue is overflow...\n");
				       }
				}

				       break;

			case 2:{
				       int ret = dequeue(arr);

				       if(flag == 0){

					       printf("\nQueue is underflow...\n");
				       }
				       else{
					       
				       		printf("%d dequeued...\n",ret);
			       		}

			       }

				       break;

			case 3: {
				       int data = frontt(arr);
				       if(flag1 == 0){
					       printf("\nQueue is empty..\n");
				       }else{

				      		 printf("\n front = %d \n",data);
					}
				}
					break;

			case 4:{
				       int ret= printQueue(arr);

				       if(ret==-1){
					       printf("\nQueue is empty...");
				       }
			       }
			       		break;

			case 5:
					exit(0);

			default:
					printf("\nwrong choice ...\n");

			}
	}

}
				       

		
				       
			       



