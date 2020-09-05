#include <stdio.h>
int main()
{
    int a = 12, b = 25,i;
    printf("Output = %d", a&b);
    printf("Output = %d", a|b);
    printf("Output = %d", a^b);
    printf("Output = %d\n",~35);
    for (i=0; i<=2; ++i)
    {
        printf("Right shift by %d: %d\n", i, a>>i);
    }
    for (i=0; i<=2; ++i) 
    {
        printf("Left shift by %d: %d\n", i, a<<i);
    }
    return 0;
}