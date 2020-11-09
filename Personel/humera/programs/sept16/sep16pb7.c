/* c program for binary search*/
#include<stdio.h>

/*function for binary search */
int binarysearch(int arr[],int l,int r,int x)
{
      if(r>=l)
      {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        return mid;
        if (arr[mid]>x)
        return binarysearch(arr,l,mid-l,x);
        return binarysearch(arr,mid+l,r,x);
      }
      return -l;
}
int main(void)
{
    int arr[]={2,3,3,4,10,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=binarysearch(arr,0,n-1,x);
    (result == -1)?printf("element is not present in array")
    :printf("element is present at index %d",result);
    return 0;
}
