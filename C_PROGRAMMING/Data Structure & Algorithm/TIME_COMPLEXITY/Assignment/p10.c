
// Merge sort

#include <stdio.h>
int merge(int *arr , int start , int mid , int end){

    int ele1 = mid - start + 1;
    int ele2 = end - mid;

    int arr1[ele1],arr2[ele2];

    for(int i = 0; i < ele1; i++){
        arr1[i]= arr[start + i];
    }

    for(int i = 0; i < ele2; i++){
        arr2[i]= arr[mid + 1 + i];
    }

    int itr1 = 0 , itr2 = 0 , itr3 = start;

    while(itr1 < ele1 && itr2 < ele2){
         if(arr1[itr1] < arr2[itr2]){
            arr[itr3] = arr1[itr1];
            itr1++;
         }else{
            arr[itr3] = arr2[itr2];
            itr2++;
         }

         itr3 ++;
    }

    while( itr1 < ele1){
        arr[itr3] = arr1[itr1];
        itr1++;
        itr3++;
    }

    while( itr2 < ele2){
        arr[itr3] = arr2[itr2];
        itr2++;
        itr3++;
    }


}
void mergeSort(int *arr, int start, int end){

    if(start < end){

        int mid = ( start + end ) / 2;
        mergeSort (arr , start , mid );
        mergeSort (arr , mid + 1, end);

        merge(arr, start , mid , end);
    }
}

void main(){

    int arr[] = { 4,8,9,-1,3,6,7,81};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array Before sorting : ");
    for(int i= 0; i < size; i++)
        printf("%d ",arr[i]);

    int start = 0, end = size-1;
    // function call
    mergeSort(arr, start,end);

     printf("\nArray After sorting : ");
     for(int i= 0; i < size; i++)
        printf("%d ",arr[i]);


}