#include <stdio.h> 
#include<stdlib.h>
int number_comparisons = 0;
int number_swaps = 0;

void swap(int *x, int *y) 
{  
    number_swaps++;
    int temp ;
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min; 
    for (i = 0; i < n-1; i++) 
    { 
        min = i; 
        for (j = i+1; j < n; j++) 
          {   
              number_comparisons++;
              if (arr[j] < arr[min])
                 min = j;  
          }
          swap(&arr[min], &arr[i]); 
    } 
} 
  

void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
 
int 
main(){ 
    int arr[100] ; 
    int n , i ;
    printf("How many Element you want:\n"); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, n); 
    printf("Sorted array by Selection sort: \n"); 
    print(arr, n); 
    printf("Number of Comparisons = %d \nnumber of swaps = %d\n",number_comparisons, number_swaps);
    //time_t a = gettimeofday();
    //printf("\n%ld\n",a);
    return 0; 
} 
