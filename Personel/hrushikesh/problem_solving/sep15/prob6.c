#include<stdio.h>
void main()
{

  int i,ctr;

  printf("Input numers of terms :::");
  scanf("%d",&ctr);

  for(i=1;i<=ctr;i++)
  {
    printf("Number is : %d nd cube of the %d is %d \n",i,i,(i*i*i));

  }
}
