/*
    Author : Agnivesh Patel
    Subject : Recursion in Factorial Programe
    Date : 17/jan/2025
*/
#include<stdio.h>
int count = 0;

int factorial(int num){
    // base case
    if(num == 0){
        return 1 ;
    }
    // recursive case
    else
    {
        
        return num*factorial(num-1);
        // count++;
        // printf("\n%d", count);
    }
}

int main() {
    int num;
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    printf("factorial of %d is %d", num , factorial(num));
    return 0;
}


//in 1st call  -->>>> 
//in 2nd call