//Check wheather triangle is valid or not if angles are given

#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter length of three angles :");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("It is valid triangle");
    }
    else
    {
        printf("It is an invalid triangle");
    }
}