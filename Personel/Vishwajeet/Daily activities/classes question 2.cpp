#include <iostream>
using namespace std;

class Numbers
{
   public:
   int a,b;
   Numbers(int n1,int n2)
  {
   a=n1;
   b=n2;
   cout <<"results"<< endl ;
  }
    int sum(){return a+b;}
};


int main ()
{
   int x;
   int y;
   cout<<"Enter first integer value : ";
   cin>>x;
   cout<<"Enter second integer value : ";
   cin>>y;
   Numbers set(x,y);
   cout << "The addition result on:"<< set.sum()<< endl ;
   return 0;
}