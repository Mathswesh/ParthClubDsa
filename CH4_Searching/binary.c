/*
    Author : Agnivesh Patel
    Date : 23-jan-2025
    objective : binary search 
*/

#include<stdio.h>

int main(){
    int array[10];
    int i, search,first,mid,last;
    int size=10, flag=0;
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the element in array in ascending order : ");
        scanf("%d",&array[i]);
    }

    printf("\nEnter the element to search : ");
    scanf("%d",&search);

    
    first = 0;
    last  = size-1;

    while (first<=last){
        mid = (first+last)/2;

        if(search == array[mid]){
            printf("\nThe element is %d  on position %d .",array[mid],mid+1);
            flag=1;
            break;
        }
        else if(search<array[mid]){
            last=mid-1;
        }
        else {
            first=mid+1;
        }
    }
    if(flag==0){
        printf("\nNot found");
    }
    return 0;
    
}