#include <stdio.h>
#include <stdlib.h>
int number_comparisons = 0;
int number_swaps = 0;

<<<<<<< HEAD
void swap(int *x, int *y)
=======
void swap(int *x, int *y)// the function swaps the two elements
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
{
    number_swaps++;
    int temp = *x;
    *x = *y;
    *y = temp;
}

<<<<<<< HEAD
=======
//the printarray function prints the the sorted array and get called in every kind of sort.
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

<<<<<<< HEAD
=======

//bubblesort function works by repeatedly swapping the adjacent elements if they are in wrong order.
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            number_comparisons++;
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
}

<<<<<<< HEAD
=======
//in insertion sort the array is virtually split into a sorted and an unsorted part.
//Values from the unsorted part are picked and placed at the correct position in the sorted part.
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        number_comparisons++;
        while (j >= 0 && arr[j] > temp)
        {
            number_swaps++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
<<<<<<< HEAD
}
=======
}

//selection sort sorts an array by repeatedly finding the minimum element (considering ascending order)
//from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
void selectionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            number_comparisons++;
            if (arr[i] > arr[j])
            {
                number_swaps++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


//The merge() function is used for merging two halves.
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        {
            L[i] = arr[l + i];
        }
    for (j = 0; j < n2; j++)
        {
            R[j] = arr[m + 1 + j];
        }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        number_comparisons++;
        if (L[i] <= R[j])
        {
            number_swaps++;
            arr[k] = L[i];
            i++;
        }
        else
        {
            number_swaps++;
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


//merge sort It divides input array in two halves, 
//calls itself for the two halves and then merges the two sorted halves. 
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}



//the partition function used in quicksort
//the elements less than pivot element will be placed at left side of pivot element and 
//elements greater than pivot element are placed at right side of pivot element.
int partition(int arr[], int low, int high)
{
	int x = arr[high]; 				//declaration of pivot element
	int i = low-1;
	for(int j = low; j<= high-1; j++)
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


//In quick sort the the function takes last elemrnt as a pivot element. 
//The pivot element will be places at its correct positon.
//then array get sorted using partition function
void quicksort(int arr[], int low, int high)     
{
	if (low < high) 
	{
		int pi= partition(arr, low, high);
		quicksort(arr, low, pi-1);
		quicksort(arr, pi+1, high);
	}
}
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
