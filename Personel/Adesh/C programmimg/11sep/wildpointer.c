#include<stdio.h>
int 
main() { 
  int *p;  /* wild pointer */
  *p = 10;
   printf("address of p: %p\n",p);  
   printf("value stored at p: %d\n",*p);
   return 0;
} 