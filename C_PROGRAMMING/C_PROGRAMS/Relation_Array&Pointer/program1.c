

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

	printf("Entered elements of array are : \n");

	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);

	}
}
