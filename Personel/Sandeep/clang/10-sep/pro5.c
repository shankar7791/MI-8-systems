#include<stdio.h>

int main()
{
    int *ptr=(int *)1000;
    printf("Value of ptr : %u",*ptr);
    ptr=ptr+1;
    printf("New Value of ptr : %u",*ptr);
    return 0;
}