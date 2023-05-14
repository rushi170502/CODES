

// Relationship between array and pointer..
//
 #include<stdio.h>
void main(){

	int size;

	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements : \n");
	for(int i=0;i<size;i++){

		scanf("%d",&arr[i]);
	}

	printf("%d\n",*(arr+1));// 20
				//here arr=100
				// *(arr + 1)
				// *(100 + 1 * sizeof(DTP))
				// *(100 + 1 * 4)
				// *(104)
				// valueAT(104)
				// = 20
				
	printf("%d\n",*(arr+3));//40
				//here arr=100
				//*(100 + 3)
				//*(100 + 3 *sizeof(DTP))
				//*(100 + 3 * 4)
				//*(112)
				//valueAt(112)
				//=40
}
