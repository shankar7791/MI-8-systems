#include <stdio.h>
void insertionSort(int a[], int number) 
{
    int i, j, temp;
    for(i = 1; i <= number - 1; i++)
    {
        for(j = i; j > 0 && a[j - 1] > a[j]; j--)
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
    }
}