/* c program to read 5 numbers and sum of all odd values between them */

#include <stdio.h>
int main()
{
    int j,numbers[5],total=0;
      printf("\ninput the first number :");
    scanf("%d",&numbers[0]);
    printf("\ninput the second number:");
    scanf("%d",&numbers[1]);
    printf("\ninput the third number:");
    scanf("%d",&numbers[2]);
      printf("\ninput the fourth number:");
scanf("%d",&numbers[3]);
printf("\ninput the fifth number:");
scanf("%d",&numbers[4]);
    for(j=0;j<5;j++)
    {
      if((numbers[j]%2)!=0)
      {
        total+=numbers[j];
      }
    }
    printf("\nsum of all odd values:%d",total);
    printf("\n");
    return 0;
  }
