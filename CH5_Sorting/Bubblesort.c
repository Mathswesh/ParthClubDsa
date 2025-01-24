/*
    Author : Agnivsh Patel
    Date : 24 jan 2025
    Objective : Bubble Sort
*/
#include<stdio.h>

int main(){
    int arr[] = {22,50,10,5,2,90,100,40};
    int x  = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int temp;

    printf("\nArray before sorting.\n");

    for ( i = 0; i <x; i++){
        printf("%d\t",arr[i]);
    }


    for (i = 0; i < x; i++){
        for ( j=0; j< x; j++){
            if(arr[j]>arr[j+1]){
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }


    printf("\nArray After sorting.\n");

    for ( i = 0; i <x; i++){
        printf("%d\t",arr[i]);
    }
        
}