#include <stdio.h>
int main()
  {
    int count,temp,i,j,number[30];
    printf("how many numbers are you going toenter?: ");
    scanf("%d",&count);
    printf("enter the %d numbers: ",count);
    for(i=0;i<count;i++)
    scanf("%d",&number[i]);
    for(i=count-2;i>=0;i--)
    {
      for(j=0;j<=1;j++)
      {
        if(number[j]>number[j+1])
        {
          temp=number[j];
          number[j]=number[j+1];
          number[j+1]=temp;
        }
      }
    }
    printf("\nsorted elements:\n ");
    for(i=0;i<count;i++)
    printf("\t%d\t",number[i]);
    return 0;
  }
