#include <stdio.h>

int binarySearch(int[], int, int, int);
void
main ()
{
    int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
    int item, location=-1;
    printf(" Enter the item which you want to search ");
    scanf("%d", &item);
    location = binarySearch(arr, 0, 9, item);
    if(location != -1){
        printf(" Item found at location %d ", location);
    }
    else{
        printf(" Item not found ");
    }
}
int binarySearch(int a[], int beg, int end, int item)
{
    int mid;
    if(end >= beg)
    {
        mid = (beg + end)/2;
        if(a[mid] == item){
            return mid+1;
        }
        else if(a[mid] < item){
            return binarySearch(a,mid+1,end,item);
        }
        else{
            return binarySearch(a,beg,mid-1,item);
        }

    }
    return -1;
}
