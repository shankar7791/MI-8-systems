// C program that read 5 numbers and sum of all odd values between them.
#include <stdio.h>

void main()
{
    int i, no[5], total = 0;

    printf("Enter First Number :");
    scanf("%d", &no[0]);

    printf("Enter Second Number :");
    scanf("%d", &no[1]);

    printf("Enter Third Number :");
    scanf("%d", &no[2]);

    printf("Enter Forth Number :");
    scanf("%d", &no[3]);

    printf("Enter Fifth Number :");
    scanf("%d", &no[4]);

    for (i = 0; i < 5; i++)
    {
        if ((no[i] % 2) != 0)
        {
            total = total + no[i];
        }
    }
    printf("Sum of all odd values :%d", total);
    printf("\n");
}
