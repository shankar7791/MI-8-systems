// Check wheather number is armstrong or not.

#include <stdio.h>
void main()
{
    int n, r, sum = 0, temp;

    printf("\n\tEnter the number :");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("\n\tarmstrong number\n");
    }
    else
    {
        printf("\n\t not an armstrong number\n");
    }
}