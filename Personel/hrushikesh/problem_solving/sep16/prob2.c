#include<stdio.h>
int main()
{
  int array[10]={1,2,3,4,5,6,7,8,9,0},i,sum;
  sum=0;
  for(i=9;i>=0;i--)
  {  sum=sum+array[i];
  }
  printf("sum of array is %d.",sum);
return 0;
}
