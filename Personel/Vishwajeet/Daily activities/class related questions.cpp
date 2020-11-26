#include <iostream>
using namespace std;

class rectangle {

   public:
   int l,b;
   int area(){return l*b;}

};



int main () {

  rectangle r;
  cout<<"Enter length of rectangle:";
  cin>>r.l;
  cout<<"Enter breadth of rectangle:";
  cin>>r.b;
  cout <<"Area:"<< r.area();

  
  return 0;
}