#include<stdio.h>
void main()
{
int i,ctr;
printf("input number of terms:");
scanf("%d",&ctr);
for(i=0;i<=ctr;i++)
{
printf("number is:%d and cube of the %d is:%d\n",i,i,(i*i*i));
}
}

