#include <stdio.h>
#include <math.h>
int main()
{
int num, sum, digits, firstdigit, lastdigit;
sum=0;
printf("enter any number:");
scanf("%d",&num);
lastdigit =num%10;
digits=(int) log10(num);
firstdigit=(int) (num/ pow(10,digits));
sum=firstdigit+lastdigit;
printf("sumof digits ",sum);
return 0;
}
