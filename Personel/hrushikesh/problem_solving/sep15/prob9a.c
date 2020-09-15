#include<stdio.h>
int main()
{
  int i,f=1,num;

  printf("Enter the number :::\n");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
      f=f*i;
    }
    printf("\nfactorail of %d is :: %d",num,f);
    return 0;
    }

      
