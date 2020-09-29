#include <stdio.h>
int num_cmpr=0;
int num_swap=0;
//function to swap elements
void swap(int*a,int*b)
{
  num_swap=0;
  int temp=*a;
  *a=*b;
  *b=temp;
}
//function to print elements of array
void printarray(int array[],int size)
{
  int i;
  for(i=0;i<size;i++)
  printf("%d\t",array[i]);
  printf("\n");
}

//bubblesort function
void bubblesort(int array[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
  {
    num_cmpr++;
    if(array[j]>array[j+1])
       swap(&array[j],&array[j+1]);
  }
}
void insertionsort(int array[],int n)
{
  int i,element,j;
  for(i=0;i<n;i++)
  {
    element=array[i];
    j=i-1;
    num_cmpr++;
    while(j>=0 && array[j]>element)
    {
      array[j+1]=array[j];
      j=j-1;
    }
    array[j+1]=element;
  }
}
