#include <stdio.h>

int main()
{
    int an1, an2, an3, sum;
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &an1, &an2, &an3);
    sum = an1 + an2 + an3; 
    if(sum == 180 && an1 > 0 && an2 > 0 && an3 > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}