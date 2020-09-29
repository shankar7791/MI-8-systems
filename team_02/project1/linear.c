#include <stdio.h>
int linearsearch(int arr[],int n,int x)
{
  int i;
  for(i =0;i < n;i++)
   if(arr[i]== x)
   return i;
  return -1;
}

int binarysearch (int arr[],int l,int r,int x)
{
  if(r >= l){
    int mid =l + (r - l)/2;
    if (arr[mid] == x)
     return mid;
     if (arr[mid]>x)
     return binarysearch(arr, l,mid-1,x);
     return binarysearch(arr, mid+1,r,x);

  }
  return -1;
}
