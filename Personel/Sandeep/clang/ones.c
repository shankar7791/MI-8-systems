#include <stdio.h>
#define IN sizeof(int) * 8 

int main()
{
    int num, zeros=0, ones=0, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=0; i<IN; i++)
    {
        if(num & 1)
            ones++;
        else
            zeros++;
        num >>= 1;
    }
    printf("Total one bit is %d", ones);
    return 0;
}