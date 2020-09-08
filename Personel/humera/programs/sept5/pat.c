#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=1;
do
{
int j=1;
while(j<=6)
{
printf("*");
j++;
}
printf("\n");
i++;
}
while(i<=6);
return 0;
}
