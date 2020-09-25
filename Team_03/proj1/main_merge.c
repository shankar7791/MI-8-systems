/*
* C Program to Perform Quick Sort on a set of Entries from a File 
* using Recursion
*/
#include <stdio.h>
 
void quicksort (int [], int, int);
 
int main()
{
    int list[50] , size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size); 
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    } 
    quicksort(list, 0, size - 1);             // calling a function
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)          //printing all sorted elements.
    {
        printf("%d ", list[i]);
    }
    printf("\n");
 
    return 0;
}
