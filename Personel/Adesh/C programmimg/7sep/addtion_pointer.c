#include <stdio.h>
int 
main(){
   int i, j, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &i, &j);

   p = &i;
   q = &j;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}