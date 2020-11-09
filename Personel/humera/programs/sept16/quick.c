// quick sort in c
#include <stdio.h>

//function to swap position of elements
   void  swap(int *a,int *b)
{
    int t= *a;
    *a = *b;
    *b = t;
}
//funtion to partition the array on the basis of pivot element
  int partition(int array[], int low, int high)
{
//select pivot element
    int pivot=array[high];
    int i= (low-1);
//put the elements smaller than pivot on the left
//and greater than pivot on the right of pivot
    for(int j=low;j<high;j++)
  {
    if (array[j]<=pivot)
    {
    i++;
    swap(&array[i],&array[j]);
    }
  }
  swap(&array[i+1], &array[high]);
  return(i+1);
}
void quicksort(int array[], int low, int high)
  {
    if(low<high)
    {
      int pi= partition(array, low, high);
      quicksort(array, low, pi-1);
      quicksort(array, pi+1, high);
    }
  }
//funtion to print elements of array
void printarray(int array[], int size)
  {
    for(int i=0;i<size;++i)
    {
      printf("%d\t", array[i]);
    }
    printf("\n");
  }

//drivers code
int main()
{
    int data[]={ 8,7,2,1,0,9,6};
    int n=sizeof(data) / sizeof(data[0]);
    quicksort(data,0,n-1);
    printf("\nsorted arrays in ascending order:\n");
    printarray(data, n);
}
