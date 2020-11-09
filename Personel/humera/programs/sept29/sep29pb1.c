/* c program to extract individual bytes from an unsigned int*/
#include<stdio.h>
union tagname
{
    unsigned int a;
    unsigned char s[4];
};

union tagname object;
int main()
{
    char i; // for loop counter
    //assign an integer number
    object.a=0xAABBCCDD;
    printf("integer number :%ld,hex:%X\n",object.a,object.a);
    printf("indivisual bytes: ");
    for(i = 3;i >= 0;i--)
    printf("%02X\t",object.s[i]);
    printf("\n");
    return 0;
}
