
// Quick sort

#include<stdio.h>

int partition(int *arr, int start, int end){
    int temp[end - start + 1];
    int index = 0;
    int pivot = arr[end];

    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
            temp[index] = arr[i];
            index++;
        }
    }

    int pos = index + start;
    temp[index] = pivot;
    index++;

    for(int i = start; i < end; i++){
        if(arr[i] >= pivot){
            temp[index++] = arr[i];
        }
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }
    
    return pos;
}

void quickSort(int *arr, int start, int end){

    if(start < end){
        int pivot = partition(arr, start, end);
    // recursive call
        quickSort(arr, start, pivot - 1);
        quickSort(arr , pivot + 1, end);
    }
}

void main(){

    int arr[]= {5,8,3,-6,5,6,1,-1,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Array Before sorting : ");
    for(int i= 0; i < size; i++)
        printf("%d ",arr[i]);

    int start = 0, end = size-1;
    // function call
    quickSort(arr, start,end);

     printf("\nArray After sorting : ");
     for(int i= 0; i < size; i++)
        printf("%d ",arr[i]);

}