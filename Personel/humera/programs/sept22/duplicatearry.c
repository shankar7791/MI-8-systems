/*c program to remove duplicate element in an array*/
#include<stdio.h>
void main()
{
  int a[20],i,j,k,n;
  printf("\nenter array size: ");
  scanf("%d",&n);
  printf("\nenter %d array element: ",n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
      printf("\n original elements of array: ");
      for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
      }
        printf("\nnew array is: ");
        for(i=0;i<n;i++)
        {
          for(j=i+1;j<n;)
          {
            if(a[j]==a[i])
            {
              for(k=j;k<n;k++)
              {
                a[k]=a[k+1];
              }
              n--;
            }
            else
            {
              j++;
            }
          }
        }
        for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
}
