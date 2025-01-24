/*
    Author : Agnivsh Patel
    Date : 24 jan 2025
    Objective : Bubble Sort
*/
#include <stdio.h>

int main()
{
    int array[] = {20, 40, 10, 20, 50, 90, 5, 1};
    int x = sizeof(array) / sizeof(array[0]);
    int i, j, temp, minindex = 0;

    printf("\nArray before sorting.\n");
    for (i = 0; i < x; i++)
    {
        printf("\t%d", array[i]);
    }
    printf("sdfsdd");
    for (i = 0; i < x; i++)
    {
        minindex = i;
        printf("\n%d",array[i]); //20
        for (j = i + 1; j < x; j++)
        {                
            if (array[j] < array[minindex])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            temp = array[i];
            array[i] = array[minindex];
            array[minindex] = temp;
        }
    }

    printf("\nArray after sorting.\n");
    for (i = 0; i < x; i++)
    {
        printf("\t%d", array[i]);
    }
    return 0;
}