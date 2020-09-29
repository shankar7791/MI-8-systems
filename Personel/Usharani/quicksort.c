#include <stdio.h>
#include <stdlib.h>
void quicksort(int arr[], int low, int high);  // function declarations
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void printArray(int arr[], int size);
int main()
{	
	int arr[100];
	int i, n;

	printf("Enter the number of elements you want to sort:\n");
	scanf("%d", &n);

	printf("Enter elements:\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	quicksort(arr, 0, n-1);
	printf("Elements after sort:");
	
	printArray(arr, n);

}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
    printf("%d ", arr[i]); 
    printf("\n"); 
}
	
int partition(int arr[], int low, int high)
{
	int x = arr[high]; 							//declaration of pivot element
	int i = low-1;
	for(int j = low; j< high-1; j++)
	{
		if(arr[j]< x)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap (&arr[i+1], &arr[high]);
	return i+1;
}

void quicksort(int arr[], int low, int high)     
{
	if (low < high) 
	{
		int pi= partition(arr, low, high);
		quicksort(arr, low, pi-1);
		quicksort(arr, pi+1, high);
	}
}

void swap(int *a, int *b)                     //swaping of two elements
{
	int temp;

	temp = *a;
	*a = *b;
	*b =temp;
}