#include <stdio.h>
#include <stdlib.h>

//the printarray function prints the the sorted array and get called in every kind of sort.
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}


//bubblesort function works by repeatedly swapping the adjacent elements if they are in wrong order.

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            number_comparisons++;
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
}

//in insertion sort the array is virtually split into a sorted and an unsorted part.
//Values from the unsorted part are picked and placed at the correct position in the sorted part.
void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        number_comparisons++;
        while (j >= 0 && arr[j] > temp)
        {
            number_swaps++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
