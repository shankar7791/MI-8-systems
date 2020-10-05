#include <stdio.h>

int binarySearch(int a[], int beg, int end, int num)
{
    int mid;
    if(end >= beg)
    {
        mid = (beg + end)/2;
        if(a[mid] == num)
        {
            return mid+1;
        }
        else if(a[mid] < num)
        {
            return binarySearch(a, mid+1, end, num);
        }
        else
        {
            return binarySearch(a, beg, mid-1, num);
        }

    }
    return -1;
}

/* linear search */
int linearSearch(int arr[], int n, int search)
{
    int c;
    for (c = 0; c < n; c++)
    {
        if (arr[c] == search)
        {
            return c;
        }
    }
    if (c == n)
        return -1;
}
