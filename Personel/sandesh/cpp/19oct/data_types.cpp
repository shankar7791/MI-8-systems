
#include <iostream>
using namespace std;

int
main()

 {

   int a = 21;
   float b = 2.2;
   int c ;

   c = a + b;
   cout << "Addition 1 - Value of c is :" << c << endl ;

   c = a - b;
   cout << "Subtraction 2 - Value of c is  :" << c << endl
   ;
   c = a * b;
   cout << "Multiplication 3 - Value of c is :" << c << endl ;

   c = a / b;
   cout << "Division 4 - Value of c is  :" << c << endl ;

   cout <<" ------------------------------"<< endl;

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   return 0;
}
