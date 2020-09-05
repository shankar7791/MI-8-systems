/* Write C program to find sum of first and last digit of any number*/

#include <stdio.h>

int main()
{
    int n, sum=0, fd, ld;

    
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &n);
    
      
    ld = n % 10;   //Find last digit to sum
    

    
    fd = n; // Copy num to first digit 

      
    while(n >= 10)    //Find the first digit by dividing num by 10 until first digit is left
    {
        n = n / 10;
    }
    fd = n;


    
    sum = fd + ld;  //Find sum of first and last digit

    printf("Sum of first and last digit = %d", sum);

    return 0;
}
