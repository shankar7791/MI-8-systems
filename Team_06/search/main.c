#include <stdio.h>

int binarySearch(int[], int, int, int);
void
main ()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int item, location=-1;
  
    printf(" Enter element u want to search ");
    scanf("%d", &item);

    location = binarySearch(arr, 0, 9, item);
    if(location != -1)
    {
        printf(" element found at location %d ", location);
    }
    else
    {
        printf(" element not found ");
    }

}
