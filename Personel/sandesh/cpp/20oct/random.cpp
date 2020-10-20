#include<iostream>
#include<cstdlib>

using namespace std;
int main()
 {
   int max;
   max = 100;
   srand(time(0));

   cout <<" number is: "<<rand()%max;
}
