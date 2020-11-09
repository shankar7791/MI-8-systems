//Print cube of number upto given integer

#include <stdio.h>
void main()
{
    int i, no;
    printf("Enter Number:");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        printf("Number is :%d and cube of the %d is :%d\n", i, i, (i * i * i));
    }
}