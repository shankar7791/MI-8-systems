#include <stdio.h>
//function to swap elements
void swap(int*a,int*b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
//bubblesort function
void bubblesort(int array[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
  if(array[j]>array[j+1])
  swap(&array[j],&array[j+1]);
}
//function to print the elements of array
void printarray(int array[],int size)
{
  int i;
  for(i=0;i<size;i++)
  printf("%d\t",array[i]);
  printf("\n");
}
