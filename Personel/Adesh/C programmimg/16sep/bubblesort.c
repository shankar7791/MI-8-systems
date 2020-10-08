#include <stdio.h> 
int number_comparisons = 0;
int number_swaps = 0;
  
void swap(int *x, int *y) 
{  
    number_swaps++;
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
   
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
          {    
               number_comparisons++;
               if (arr[j] > arr[j+1]) 
               swap(&arr[j], &arr[j+1]); 
          }
} 
  
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        printf("%d  ", arr[i]); 
    printf("\n"); 
} 
  
 
int main() 
{ 
    int arr[100] ; 
    int n ,i ;
    printf("\nEnter how many number to Sort:\n");
    scanf("%d",&n);
    printf("Enter Numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n); 
    printf("Sorted array by Bubble sort: \n"); 
    printArray(arr, n); 
    printf("Number of Comparisons = %d \nnumber of swaps = %d\n",number_comparisons, number_swaps);

    return 0; 
} 
