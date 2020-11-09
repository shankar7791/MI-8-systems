//Given number is positive or negative

#include <stdio.h>
void main()
{
    int no;

    printf("Enter any no:");
    scanf("%d", &no);

    if (no >= 0)
    {
        printf("%d is a positive number \n", no);
    }
    else
    {
        printf("%d is a negative number \n", no);
    }
}
