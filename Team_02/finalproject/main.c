#include <stdio.h>
#include <stdlib.h>
extern int binarySearch(int *, int, int, int);
extern void bubbleSort(int *, int);
extern void printArray(int *, int);

extern void insertionSort(int *, int);

extern void testbinary(int *,int,int);
extern int linearSearch(int *, int, int);
extern void bubbleSort(int *, int);
extern void printArray(int *, int);
extern void insertionSort(int *, int);
extern void selectionSort(int *, int);



extern int number_comparisons;
extern int number_swaps;

int main()
{
    int arr[100];
    int n, i, num, a, opt, opt1;

    printf("\nEnter how many number to Sort:\n");
    scanf("%d", &n);
  
    printf("Enter Numbers:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }
    while(1){
    printf("Select Option to which method you want to sorting.\n");
    printf("1. Bubble Sort.\n");
    printf("2. Insertion Sort.\n");
    printf("3. Selection Sort.\n");
    printf("4. exit.\n");
    printf("Enter Option:");
    scanf("%d", &opt);
    switch (opt)
    
    {
    case 1:
        
        bubbleSort(arr, n);
        printf("Sorted array  by Bubble sort: \n");
        printArray(arr, n);
        testbinary(arr,n,num);
        printf("Number of Comparisons = %d \nnumber of swaps = %d\n", number_comparisons, number_swaps);
        break;

    case 2:

        insertionSort(arr, n);
        printf("Sorted array  by Insertion sort: \n");
        printArray(arr, n);
        printf("Number of Comparisons = %d \nnumber of swaps = %d\n", number_comparisons, number_swaps);
        break;

    case 3:
        
        selectionSort(arr, n);
        printf("Sorted array  by selection sort: \n");
        printArray(arr, n);
        printf("Number of Comparisons = %d \nnumber of swaps = %d\n", number_comparisons, number_swaps);
        break;
    case 4:
         
         default:
         printf("please enter valid number");
         break;
    }if(opt ==4)
    continue;
    else
    break;
    }
    


    
    printf("\nEnter Number to search:");
    scanf("%d", &num);
    while(1){

    printf("Select Option to which method you want to searching.\n");
    printf("1. Linear Search.\n");
    printf("2. Binary Search.\n");
    
    printf("Enter Option:");
    scanf("%d", &opt1);
    switch (opt1)
    {

    case 1:
        
        a = linearSearch(arr, n, num);
        if (a == -1)
        {
            printf("Number is Not Found.\n");
        }
        else
            printf("Number is found at %d Position.\n", a + 1);
        break;

    case 2:
        
        a = binarySearch(arr, 0, n, num);
        if (a == -1)
        {
            printf("Number is Not Found.\n");
        }
        else
            printf("Number is found at %d Position.\n", a + 1);
        break;

    case 3:
         default:
         printf("please enter valid number");
         break;
    }if(opt1==3)
    continue;
    else 
    break;
    }

    return 0;
}