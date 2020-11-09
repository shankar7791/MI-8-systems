#include<stdio.h>
void main()
{
    int a[100],i,j,temp,n;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted element");
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
}