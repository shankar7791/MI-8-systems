#include<stdio.h>
#include<math.h>
//insertion sort function
void insertionsort(int array[],int n)
{
  int i,element,j;
  for(i=0;i<n;i++)
  {
    element=array[i];
    j=i-1;
    while(j>=0 && array[j]>element)
    {
      array[j+1]=array[j];
      j=j-1;
    }
    array[j+1]=element;
  }
}
//function to print elements of printarray
void parray(int array[],int size)
{
  int i;
  for(i=0;i<size;i++)
  printf("%d\t",array[i]);
  printf("\n");
}
