#include <stdio.h>
#include <stdlib.h>
int number_comparisons = 0;
int number_swaps = 0;

void swap(int *x, int *y)
{
    number_swaps++;
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

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