#include <iostream>
using namespace std;
int main()
 {
   int a[] = {4, 9, 1, 3, 8, 555, 66, 2, 44, 10};
   int largest, i, pos;
   largest = a[0];

   for(i=1; i<10; i++)
    {
      if(a[i]>largest)
       {
         largest = a[i];
         pos = i;
      }
   }
   cout<<"The largest element in the array is "<<largest<<" and it is at index "<<pos;
   return 0;
}