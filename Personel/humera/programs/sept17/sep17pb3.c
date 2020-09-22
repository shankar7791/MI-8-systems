/* c program to find the maximum and minimum element in an array*/
#include <stdio.h>
void main()
{
  int arr1[100];
  int i,mx,mn,n;
  printf("\n\nfind maximum and minimum elements in an array:\n");
  printf("----------------------------------------\n");
  printf("input the number of elements to be sorted in the array: ");
  scanf("%d",&n);
  printf("input %d elements in the array:\n",n);
  for(i=0;i<n;i++)
  {
    printf("element -%d: ",i);
    scanf("%d",&arr1[i]);
  }
  mx =arr1[0];
  mn =arr1[0];
  for(i=1;i<n;i++)
  {
    if(arr1[i]>mx)
    {
      mx=arr1[i];
    }
  }
  printf("maximum element is :%d\n",mx);
  printf("minimum element is :%d\n\n",mn);
}
