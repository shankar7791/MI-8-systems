#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);

    if (a == b)
    {
        printf("tripple the number \n %d", a * 3);
    }
    else
    {
        printf("addition of two numbers \n %d", a + b);
    }
}