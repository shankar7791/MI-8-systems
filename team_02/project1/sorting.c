#include <stdio.h>
//function to swap elements
void swap(int*a,int*b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
//function to print the elements of array
void printarray(int arr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  printf("%d\t",arr[i]);
  printf("\n");
}
//bubblesort function
void bubblesort(int arr[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
  if(arr[j]>arr[j+1])
  swap(&arr[j],&arr[j+1]);
}
//insertion sort function
void insertionsort(int arr[],int n)
{
  int i,element,j;
  for(i=0;i<n;i++)
  {
    element=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>element)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=element;
  }
}
//selection sort
void selectionsort(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
      min=i;
     for(j=i+1;j<n;j++)
     {
       if(arr[j]<arr[min])
           min=j;
     }
       swap(&arr[i],&arr[min]);

   }

}
