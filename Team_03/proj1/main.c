#include<stdio.h>
 
int linear_search(int*, int, int);
int main()
{
   int arr[100], se, c, n, pos;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d numbers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d",&arr[c]);
 
   printf("Enter the number to search\n");
   scanf("%d",&se);
 
   pos = linear_search(arr, n, se);
 
   if ( pos == -1 )
      printf("%d is not present in list.\n", se);
   else
      printf("%d is present at location %d.\n", se, pos+1);
 
   return 0;
} 
 
