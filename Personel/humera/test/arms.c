#include <stdio.h>
int main()
{ 
int num, originalnumber,remainder, result=0;
printf("enter the number:");
scanf("%d",&num);
originalnumber= num;
while (originalnumber != 0)
{
remainder = originalnumber % 10;
result+= remainder*remainder*remainder;
originalnumber /=10;
}
if(result==num)
printf("%d is an armstrong number.",num);
else 
printf("%d is not an armstrong number.",num);
return 0;
}
