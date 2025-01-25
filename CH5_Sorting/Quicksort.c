/*
    Author : Agnivsh Patel
    Date : 24 jan 2025
    Objective : Quick Sort
*/

#include<stdio.h>
void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}

int partition(int arr[],int low , int high){
    int pivot = arr[high];

    int i =low -1 ;

    for (int j = low; j <=high-1; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quicksort(int arr[],int low , int high){
    int i;
    if(low<high){
        i = partition(arr,low,high);
        quicksort(arr,low,i-1);
        quicksort(arr,i+1,high);
    }
}

int main(){
    int array[] = {20, 40, 10, 20, 50, 90, 5, 1};
    int x = sizeof(array) / sizeof(array[0]);
    int i;
    
    printf("\nArray before sorting.\n");
    for (i = 0; i < x; i++)
    {
        printf("\t%d", array[i]);
    }
    
    quicksort(array,0,x-1);
    
    printf("\nArray after sorting.\n");
    for (i = 0; i < x; i++)
    {
        printf("\t%d", array[i]);
    }
    return 0;
}