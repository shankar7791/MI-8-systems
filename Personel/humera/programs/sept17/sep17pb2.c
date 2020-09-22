/* c program to count the frequency of each element of an array*/
#include <stdio.h>
void main()
{
  int arr1[100],fr1[100];
  int n,i,j,ctr;
  printf("\n\n count frequency of each element of an array:\n");
  printf("------------------------------\n");
  printf("input the number of elements to be sorted in the array: ");
  scanf("%d",&n);
  printf("input %d elements in the array:\n",n);
  for(i=0;i<n;i++)
  {
    printf("elements -%d:",i);
    scanf("%d",&arr1[i]);
    fr1[i]=-1;
  }
  for(i=0;i<n;i++)
  {
    ctr=1;
    for(j=i+1;j<n;j++)
    {
      if(arr1[i]==arr1[j])
      {
        ctr++;
        fr1[j]=0;
      }
    }
    if(fr1[i]!=0)
    {
      fr1[i]=ctr;
    }
  }
  printf("\nthe frequency of all elements of array:\n");
  for(i=0;i<n;i++)
  {
    if(fr1[i]!=0)
    {
      printf("%d occurs %d times\n",arr1[i],fr1[i]);
    }
  }
}
