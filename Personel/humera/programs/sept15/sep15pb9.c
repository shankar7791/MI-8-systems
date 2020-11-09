/* c program computes the sum of two one-dimensional
*arrays using malloc */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
  int i,n;
  int *a, *b, *c;
  printf("how many elements in each array:\n");
  scanf("%d", &n);
  a=(int *)malloc(n*sizeof(int));
  b=(int *)malloc(n*sizeof(int));
  c=(int *)malloc(n*sizeof(int));
  printf("enter elements of first list\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  printf("enter elements of 2 list\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",b+i);
  }
  for(i=0;i<n;i++)
  {
    *(c+i)=*(a+i)+ *(b+i);
  }
  printf("resultant list is\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",*(c+i));
  }
}
