#include <stdio.h>

//Find binary of a decimal Number

void main()
{
    int n, binary, digit, dec = 0, i = 0;

    printf("\n Enter the Binary Number:-");
    scanf("%d", &binary);

    n = binary;

    while (n != 0)
    {
        digit = n % 10;
        dec += digit << i;
        n = n / 10;
        i++;
    }

    printf("\n Binary of %d in Decimail is=%d", binary, dec);
}