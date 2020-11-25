#include <iostream>
using namespace std;

class Rectangle
 {

   public:
   int x,y;
   int area(){return x*y;}

};



int main ()
 {

  Rectangle rect;
  cout<<"Enter length of rectangle:";
  cin>>rect.x;
  cout<<"Enter breadth of rectangle:";
  cin>>rect.y;
  cout <<"Area:"<< rect.area();

  
  return 0;
}