#include<stdio.h>

int linear_search(int *pointer, int n, int find)
{
   int c;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( *(pointer+c) == find )
         return c;
   }
 
   return -1;
}