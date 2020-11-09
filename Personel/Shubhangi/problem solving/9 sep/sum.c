#include <stdio.h>
int main()
{
    int n, t, sum = 0, remainder;

    printf("Enter the number you want sum of : \n");
    scanf("%d", &n);

    t = n;

    while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
    }

    printf("Sum of digits of given number is %d = %d\n", n, sum);

    return 0;
}
