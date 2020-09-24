#include <stdio.h>

extern int BinerySearch(int *,int, int);
extern int LinearSearch(int *,int, int, int);
extern void Quicksort(int *, int, int);

int main () {
    int n, c, array[100], search;
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
    
    printf("\n\n===== Search After Sorting ===== \n ");
    printf("Please Enter the number you want to find : ");
    scanf("%d", &search);
    
    printf("\n");
    
    printf("\n===== Binery Search Result =====\n");
        BinerySearch(array, n, search);
        
    printf("\n\n===== Linear Search Result =====\n\n");
        LinearSearch(array, c, n, search);
        
}


