#include <stdio.h>

// checking the minimum and maximum element in array
int main()
{
    int arr1[80];
    int i, max, min, n;
    printf("Enter the number of elements you want to store in array:\n");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("elements-%d :", i);
        scanf("%d", &arr1[i]);
    }
    min = arr1[0];
    max = arr1[0];

    for (i = 0; i < n; i++)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
            
            printf("The maximum element is:\n");
        }
        if (arr1[i] < min)
        {
            min = arr1[i];
            printf("The minimum element is:\n");
        }
    }
}
