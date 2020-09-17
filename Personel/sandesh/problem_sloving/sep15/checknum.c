#include <stdio.h>
void
main()
{
  int no;
  printf(" enter the number ");
  scanf("%d", &no);

   if(no < 0){
      printf(" nuber is negative ");
   }
   if(no > 0){
      printf(" number is positive ");
   }
   if(no == 0){
      printf(" number is zero ");
   }
}
