#include <stdio.h>

struct Distance 
{
   int feet;
   float inch;
} d1, d2, res;

int main() 
{
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   // adding distances
   res.feet = d1.feet + d2.feet;
   res.inch = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (res.inch >= 12.0) 
   {
      res.inch = res.inch - 12.0;
      ++res.feet;
   }

   printf("\nSum of distances = %d\'-%.1f\n\n", res.feet, res.inch);
   return 0;
}