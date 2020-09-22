/* C program- insertion sort implementation */
#include <stdio.h>
int main()
{
  int i,j,count,temp,number[25];
  printf("enter the number of elements:\n");
  scanf("%d",&count);
   printf("enter the %d elements: ",count);
   //this loop store the input numbers in an array
   for(i=0;i<count;i++)
   scanf("%d",&number[i]);

   //implementation of insertion algorithm
   for(i=1;i<count;i++)
   {
     temp=number[i];
     j=i-1;
     while((temp<number[j])&&(j>=0))
     {
       number[j+1]=number[j];
       j=j-1;
     }
     number[j+1]=temp;
   }
   printf("order of sorted elements:\n");
   for(i=0;i<count;i++)
   printf("%d\n",number[i]);
   return 0;
}
