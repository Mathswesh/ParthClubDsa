/*
    Author : Agnivsh Patel
    Date : 25 jan 2025
    Objective : Bubble Sort
*/

#include<stdio.h>

int main(){
    int array[] = {12 ,6, 1, 90 ,22 ,4 ,11 , 2};

    int size = sizeof(array)/sizeof(array[0]);

    int i,j,key;

    printf("\nArray Before Sorting.\n");
    for ( i = 0; i < size; i++) {
        printf("%d\t",array[i]);
    }
    
    for ( i = 1; i < size; i++){
        int j = i-1;
        key = array[i];

        while (j>=0 && array[j]>key){
            array[j+1]= array[j];
            j--;
        }
        array[j+1]= key;
    }

    printf("\nArray After Sorting.\n");
    for ( i = 0; i < size; i++) {
        printf("%d\t",array[i]);
    }

}