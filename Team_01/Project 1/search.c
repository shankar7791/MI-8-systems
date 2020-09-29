#include <stdio.h>
//In Binary search data must be sorted.
//bineary search check middle element and dicide to going lower or upper or return.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {

        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
<<<<<<< HEAD
=======

//the program accepts the array as well as the number user want to search in that array
//comparing element(want to search) with each element in array one by one
//if element is found the location of that element gets printed...and if not then user will get the messsage of same
int linearSearch(int arr[], int n, int search)
{
    int c;
    for (c = 0; c < n; c++)
    {
        if (arr[c] == search) /* If required element is found */
        {
            return c;
        }
    }
    if (c == n)
        return -1;
}
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
