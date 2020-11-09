#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
   int max;
   max = 100;
   srand(time(0));
   cout << "The random number is: "<<rand()%max;
   return 0;
}