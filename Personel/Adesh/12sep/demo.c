#include <stdio.h>
#include <stdlib.h>
int string_ln(char *) ;
void display(){
    printf("\nIn Demo program\n");
}

int string_ln(char *p) 
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}