#include <stdio.h>
#include  <stdlib.h>
void Quicksort(int list[], int low, int high)
{
int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        // swapping of numbers in ascending order
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        Quicksort(list, low, j - 1);
        Quicksort(list, j + 1, high);
    }
}