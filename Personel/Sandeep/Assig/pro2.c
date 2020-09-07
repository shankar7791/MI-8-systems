#include <stdio.h>

int main()
{
    int num, sum=0, f,l;
    printf("Enter any number: ");
    scanf("%d", &num);
    l = num % 10;
    f = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    f= num;
    sum = f+l; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}