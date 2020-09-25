#include <stdio.h>
// Calling for Functions
extern int BinerySearch(int *,int, int);
extern int LinearSearch(int *,int, int, int);
extern void Quicksort(int *, int, int);
extern void BubbleSort(int *, int, int);
extern void Insertionsort(int *, int, int);
// extern void Mergesort(int *, int, int *, int, int *);



int main () 
{
    int n, c, array[100], search;
    int n1, array2[100], sorted[200];
    printf ("Total number of elements You want to Enter:\n");
    scanf ("%d", &n);
    printf ("Please Enter %d Numbers \n", n);
    for (c = 0; c < n; c++){
    scanf ("%d", &array[c]);
    }
    
     
    printf("\n\n===== Quick Sort Result =====\n\n");
    Quicksort(array, 0, n - 1);
    for (c = 0; c < n; c++)
    {
        printf("%d ", array[c]);
    } 
    
    printf("\n\n===== Bubble Sort Result =====\n\n");
    Bubblesort(array, c, n );
    for (c = 0; c < n; c++)
    {
        printf("%d ", array[c]);
    }

    printf("\n\n===== Insertion Sort Result =====\n\n");
    Insertionsort(array, c, n);
    for (c = 0; c < n; c++)
    {
        printf("%d ", array[c]);
    }

    // printf("\n\n===== Merge Sort Result =====\n\n");
    
    
    // printf("Input number of elements in second array\n");
    // scanf("%d", &n1);

    // printf("Input %d integers\n", n1);
    // for (c = 0; c < n1; c++) {
    //     scanf("%d", &array2[c]);
    // }

    // Mergesort(array, n, array2, n1, sorted);

    // printf("Sorted array:\n");

    // for (c = 0; c < n + n1; c++) {
    //     printf("%d\n", sorted[c]);
    // }
    
    printf("\n\n===== Search After Sorting ===== \n ");

    printf("Please Enter the number you want to find : ");
    scanf("%d", &search);
    
    printf("\n");
    
    printf("\n===== Binery Search Result =====\n");
        BinerySearch(array, n, search);
        
    printf("\n\n===== Linear Search Result =====\n\n");
        LinearSearch(array, c, n, search);
        
}


