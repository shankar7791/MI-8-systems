#include <stdio.h>
int main() 
{
   int arr[10],n;
   int i, j, pos, swap;
   printf("Enter n val:\n");
   scanf("%d",&n);
   printf("enter n values:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for (i = 0; i < (n - 1); i++) 
   {
      pos = i;
      for (j = i + 1; j < n; j++) 
      {
         if (arr[pos] > arr[j])
            pos = j;
      }
      if (pos != i) 
      {
         swap = arr[i];
         arr[i] = arr[pos];
         arr[pos] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}