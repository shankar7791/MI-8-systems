#include <stdio.h>
#include <stdlib.h>
extern int binarySearch(int *, int, int, int);
extern void bubbleSort(int *, int);
extern void printArray(int *, int);
extern void testbs();

int main()
{
    int arr[100];
    int n, i, num, a;
    printf("\nEnter how many number to Sort:\n");
    scanf("%d", &n);
    printf("Enter Numbers:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array  by Bubble sort: \n");
    printArray(arr, n);
    //printf("Number of Comparisons = %d \nnumber of swaps = %d\n",number_comparisons, number_swaps);
    printf("\nEnter Number to search:");
    scanf("%d", &num);
    //bubbleSort(arr,n);

    testbs();
    a = binarySearch(arr, 0, n, num);
    if (a == -1)
    {
        printf("\nNumber is Not Found.\n");
    }
    else
        printf("\nNumber is found at %d Position.\n", a + 1);

    return 0;
}
