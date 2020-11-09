/* Write a program in C to convert decimal number to binary number using the function.*/

#include<stdio.h>

long convert_to_Binary(int);

int 
main()
{
    long binary_no;
    int decimal_no;
   
    printf(" Input any decimal number : ");
    scanf("%d",&decimal_no);
    
    binary_no = convert_to_Binary(decimal_no);
    
    printf("\n The Binary value is : %ld\n\n",binary_no);

    return 0;
}
long convert_to_Binary(int decimal_no)
{
    long binary_no=0,remainder,f=1;
    while(decimal_no != 0)
    {
         remainder = decimal_no % 2;
         binary_no = binary_no + remainder * f;
         f = f * 10;
         decimal_no = decimal_no / 2;
    }
    return binary_no;
}

