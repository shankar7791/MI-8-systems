#include <stdio.h>
int main()
{
   int num1, num2, *ptr, *ptr1, sum;
   printf(" Input the first number : ");
   scanf("%d", &num1);
   printf(" Input the second  number : ");
   scanf("%d", &num2);   
   
   ptr = &num1;
   ptr1 = &num2;
 
   sum = *ptr + *ptr1;
 
   printf(" The sum of the entered numbers is : %d\n",sum);
 
   return 0;
}

