#include <stdio.h>
int number_comparisons = 0;
int number_swaps = 0;

void insertion(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        number_comparisons++;
        while(j >= 0 && arr[j] > temp)
        {   
            number_swaps++;
            arr[j+1] = arr[j];
            j = j-1;
        }
    arr[j+1] = temp;
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
    insertion(arr, n); 
    printf("Sorted array by Insertion sort: \n"); 
    print(arr, n); 
    printf("Number of Comparisons = %d \nnumber of swaps = %d\n",number_comparisons, number_swaps);

    return 0; 
} 
