#include <stdio.h>
#define SIZE sizeof(int) * 8 

int main()
{
    int num, count, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    count = 0;
    for(i=0; i<SIZE; i++)
    {
        if((num >> i ) & 1)
        {
            break;
        }
        count++;
    }
    printf("Total number of trailing zeros in %d is %d.", num, count);
    return 0;
}