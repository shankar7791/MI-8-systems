#include <stdio.h>
extern int binarySearch(int *, int, int, int);
extern void bubbleSort(int *, int);
extern void printArray(int *, int);
extern void insertionSort(int *, int);
extern int number_comparisons;
void testbinary()
{
    int arr[] = {50, 30, 60, 10, 80};
    int res, res1;
    res1 = binarySearch(arr, 0, 5, 100);
    int s, i;

    for (i = 0; i < 5 - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
            ;
        else
            bubbleSort(arr, 5);
    }
    //printArray(arr, 5);
    res = binarySearch(arr, 0, 5, 10);
    res1 = binarySearch(arr, 0, 5, 100);
    if (res == -1 && res1 != -1)
    {
        printf("In Test Case Binary Search failed.\n");
    }
    else
        printf("In Test Case Binary Search Succesed. \n");
}

void testbubble()
{
    int arr[] = {50, 30, 60, 10, 80};
    int i , flag = 0;
    bubbleSort(arr, 5);
    for (i = 0; i < 5 -1; i++)
    {
        if (arr[i] <= arr[i + 1])
            ;
        else
            flag =1;
    }

    if(flag!=1 && number_comparisons > 0)
        {
            printf("In Testcase Bubble sort Succesed. \n");
        }

    else
    {
        printf("In Testcase Bubble sort Failed. \n");
    }

}