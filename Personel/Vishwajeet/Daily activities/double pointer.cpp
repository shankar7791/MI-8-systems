#include <iostream>
#include<conio.h>

using namespace std;

int main() {

   int v;
   int *p;
   int **ptr;

   cout << "Pointer Example C++ Program : Pointer to Pointer or Double Pointer  \n";

   v = 100;

   cout << "Address of v 			[&v]	:" << &v << "\n";
   cout << "Value   of v 			[v]	:" << v << "\n\n";

   p = &v;

   cout << "Address of Pointer 		[p] 	:" << p << "\n";
   cout << "Value of Pointer 		[*p] 	:" << *p << "\n\n";

   ptr = &p;

   cout << "Address of Double Pointer 	[ptr] 	:" << ptr << "\n";
   cout << "Value of Double Pointer 		[*ptr] 	:" << *ptr << "\n\n";
   cout << "Double Pointer Value 		[**ptr] 	:" << **ptr << "\n";

   return 0;

}