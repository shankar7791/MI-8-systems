#include <stdio.h>
void main()
{
    int a, b, AND, OR, XOR, NOT;

    printf("Enter First No:");
    scanf("%d", &a);

    printf("Enter second No:");
    scanf("%d", &b);

    AND = (a & b);
    OR = (a | b);
    XOR = (a^b);
    NOT =(~a);

    printf("AND Operation is :%d\n",AND);
    printf("OR Operation is :%d\n",OR);
    printf("XOR Operation is :%d\n",XOR);
    printf("NOT value of First Number is :%d\n",NOT);
    printf("Left shift value of First Number is :%d\n",a<<1);
    printf("Right shift value of First Number is :%d\n",a>>1);
}