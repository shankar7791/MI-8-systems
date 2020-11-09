 array2[k];
//         k++;#include <stdio.h>
#include <stdlib.h>

// Function to sort an array using Quicksort
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

// Function to sort an array using BubbleSort
void Bubblesort(int list[], int c, int n){
    int d, swap;
    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (list[d] > list[d+1]) /* For decreasing order use < */
                {
                    swap       = list[d];
                    list[d]   = list[d+1];
                    list[d+1] = swap;
                }
        }
    }
}

// Function to sort an array using InsertionSort
void Insertionsort(int list[], int c, int n){
    int d, t, flag = 0;
   for (c = 1 ; c <= n - 1; c++) {
    t = list[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (list[d] > t) {
        list[d+1] = list[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      list[d+1] = t;
  }
}

// void Mergesort(int array[], int n, int array2[], int n1, int sorted[]) {
//   int i, j, k;

//   j = k = 0;

//   for (i = 0; i < n + n1;) {
//     if (j < n && k < n1) {
//       if (array[j] < array2[k]) {
//         sorted[i] = array[j];
//         j++;
//       }
//       else {
//         sorted[i] = array2[k];
//         k++;
//       }
//       i++;
//     }
//     else if (j == n) {
//       for (; i < n + n1;) {
//         sorted[i] =
//         i++;
//       }
//     }
//     else {
//       for (; i < n + n1;) {
//         sorted[i] = array[j];
//         j++;
//         i++;
//       }
//     }
//   }
// }
