#include <stdio.h>
long add(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("Add two numbers using call by reference:\n");  
 
   printf(" enter the first and second num: : ");
   scanf("%ld %ld", &fno,&sno);
   sum = add(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long add(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}
