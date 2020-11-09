#include<stdio.h>


//Using '&' operator check wheather a ineger number is odd or even
void main()
{
    int no;

    printf("\n Enter any Number: ");
    scanf("%d", &no);

    if(no & 1)
    {
        printf("%d is odd number\n",no);
    }
    else
    {
        printf("%d is even number\n",no);
    }
    
}