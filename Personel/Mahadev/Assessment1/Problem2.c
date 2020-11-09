//Program to find sum of first and last digit of any number

#include <stdio.h>

void main()
{
    int no, sum = 0, first, last;

    printf("\n\tEnter any number :\n");
    scanf("%d", &no);

    last = no % 10;

    first = no;

    while (no > 10)
    {
        no = no / 10;
    }
    first = no;

    sum = first + last;

    printf("Sum of first and last digit =%d\n", sum);
}