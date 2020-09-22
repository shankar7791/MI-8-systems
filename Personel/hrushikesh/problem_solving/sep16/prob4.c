#include<stdio.h>
int main()
{
  int array[100],i,num;
  printf("Enter the size of Array\n");
  scanf("%d",&num);

  printf("Enter the numbers of Array\n");

  for(i=0;i<=num;i++)
  {
  scanf("%d",&array[i]);
  }

  printf("The even numbers of Array are---\n");
  for(i=0;i<num;i++)
  {
     if(array[i]%2==0)
     {
       printf("%d \t",array[i]);
     }
  }
  return 0;
}
