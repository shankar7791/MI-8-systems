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

void selectionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            number_comparisons++;
            if (arr[i] > arr[j])
            {
                number_swaps++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        {
            L[i] = arr[l + i];
        }
    for (j = 0; j < n2; j++)
        {
            R[j] = arr[m + 1 + j];
        }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        number_comparisons++;
        if (L[i] <= R[j])
        {
            number_swaps++;
            arr[k] = L[i];
            i++;
        }
        else
        {
            number_swaps++;
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}