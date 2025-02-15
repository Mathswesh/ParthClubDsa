// #include <stdio.h>
// void swap(int* a, int* b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// // Partition function
// int partition(int arr[], int low, int high) {

//     // Choose the pivot
//     int pivot = arr[high];

//     // Index of smaller element and indicates
//     // the right position of pivot found so far
//     int i = low - 1;

//     // Traverse arr[low..high] and move all smaller
//     // elements to the left side. Elements from low to
//     // i are smaller after every iteration
//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }

//     // Move pivot after smaller elements and
//     // return its position
//     swap(&arr[i + 1], &arr[high]);
//     return i + 1;
// }

// // The QuickSort function implementation
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {

//         // pi is the partition return index of pivot
//         int pi = partition(arr, low, high);

//         // Recursion calls for smaller elements
//         // and greater or equals elements
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int partition(int arr,int low ,int high){
    
    int pivot = arr[high];
    int i  = low-1;
    return i+1;
}

void quicksort(int arr,int low ,int high){
    if(low<high){
        int i = partition(arr,low,high);
    }
}

int main()
{
    int array[] = {3, 6, 45, 33, 23, 56};
    int i, j, key;

    int size = sizeof(array) / sizeof(array[0]);
    printf("\nArray Before Sorting.\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    quicksort(array,0,size-1);

    printf("\nArray After Sorting.\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}