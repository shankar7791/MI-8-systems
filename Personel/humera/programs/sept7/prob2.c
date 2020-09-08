/*program to convert decimal to binary*/

#include <stdio.h>
#include <math.h>

long decimaltobinary(int decimalnum)
{
    long binarynum=0;
    int rem,temp=1;

    while(decimalnum!=0)
    {
      rem=decimalnum%2;
      decimalnum=decimalnum/2;
      binarynum=binarynum+rem*temp;
      temp=temp*10;
    }
    return binarynum;
  }

int main()
{
  int decimalnum;
  printf("enter a decimal number:");
  scanf("%d",&decimalnum);
  printf("equivalent binary number is :%ld",decimaltobinary(decimalnum));
  return 0;
}
