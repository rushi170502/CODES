
// Counting sort

#include<stdio.h>

void counting_Sort(int *arr , int size, int pos){

    // step 1:  count array initialization 
     int countArr[10] = {0};

     // step 2 : find data
     for(int i = 0; i < 10 ; i++){
          countArr[(arr[i]/pos) % 10] = arr[i];
     }

     // step 3: commulative array

    for(int i = 1; i < 10; i++){
        countArr[i] += countArr[i-1];
    }

    // step 4 : make new array \

    int outputArr[size];
    for(int i = size - 1 ; i >= 0 ; i--){
        outputArr[countArr[(arr[i]/pos) % 10]] = arr[i];
    }
    // step 5 : copy output array to original array

    for(int i = 0 ; i < size ; i++){
        arr[i] = outputArr[i];
    }
}

void radix_Sort(int *arr, int size ){

    int max = arr[0];

    // step 1 : find maximum from array 
    for( int i = 1; i < size; i++ ){
        if(arr[i] > max)
            max = arr[i];
    }

    // step 2 : find digits of maximun number from array
    for(int pos = 1; max / pos > 0 ; pos = pos * 10){

            counting_Sort(arr, size , pos);
    }
    
}

void main(){

    int size ;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array element : \n");
    for(int i = 0; i < size ; i++)
        scanf("%d   ", &arr[i]);

    printf("\nArray elements before sorting :  ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    radix_Sort(arr,size);


    printf("\nArray elements After sorting : ");
    for(int i=0; i<size; i++) {
        printf("%d   ", arr[i]);
    }

}