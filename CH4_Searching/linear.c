/*
    Author : Agnivesh Patel
    Date : 23-jan-2025
    Objective : linear search
*/


#include<stdio.h>

int main(){

    int array[10];
    int x,i, search, flag=1;

    for ( i = 0; i < 10; i++)
    {    
        printf("\nEnter the element in array : ");
        scanf("%d",&array[i]);
    }
    x= sizeof(array)/sizeof(array[0]);
    printf("%d",x);


    printf("\n Enter the element to search : ");
    scanf("%d",&search);

    for ( i = 0; i < x; i++)
    {
        if (search == array[i])
        {
            printf("\nElement is %d",array[i]);
            break;
        }
    }
    if(i==x){
        printf("\n Not found");
    }
    return 0;
}