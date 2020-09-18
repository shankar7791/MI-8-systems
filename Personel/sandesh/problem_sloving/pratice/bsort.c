#include<stdio.h>
void bsort(int a[20], int n)
{
int i,temp,pass;
for(pass=0; pass<n; pass++)
  for(i=0;i<=n-pass-1; i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }

  void main()
  {
    int a[20],i,n;
    printf("how many number u want");
    scanf("%d",&n);
    printf("enter the unsorted element");
      for(i=0;i<n;i++)
      scanf("%d", &a[i]);
      bsort(a,n);
      printf("enter sorted element");
      for(i=0;i<n;i++)
      printf("%d\t",a[i]);
  }
}
