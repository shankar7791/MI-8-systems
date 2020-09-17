/* c program to find a pair with given sum in the array*/
#include <stdio.h>
void checkforsum(int arr1[],int n,int s)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      //if given sum is found
      if(arr1[i]+arr1[j]==s)
      {
        printf("pair of elements can make the given sum by value of index %d and %d",i,j);
        return;
      }
    }
  }
  printf("no pair can make the given sum.");
}
int main()
{
  int arr1[]={6,8,4,-5,7,9};
  int s=15;
  printf("the given array : ");
  int n=sizeof(arr1)/sizeof(arr1[0]);
  for(int i=0;i<n-1;i++)
  {
    printf("%d",arr1[i]);
  }
  printf("\n the given sum:%d\n",s);
  printf("\n");
  checkforsum(arr1,n,s);
  return 0;
}
