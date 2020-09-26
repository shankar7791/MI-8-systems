#include <stdio.h>
void insertionSort(int a[], int number) 

int main()
{
    int a[100], number, i;
    
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    
    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);

    insertionSort(a, number);
    printf("\n Insertion Sort Result : ");
    for(i = 0; i < number; i++)  {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}