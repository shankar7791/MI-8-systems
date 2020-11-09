#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
    string color;
    int topspeed;
    int doors;
};

int main() {
  Car carObj1;
  carObj1.brand = "Nexon";
  carObj1.model = "mini xuv";
  carObj1.year = 2019;
  carObj1.color = "Red";
  carObj1.topspeed = 1200;
  carObj1.doors = 2;


  Car carObj2;
  carObj2.brand = "Creata";
  carObj2.model = "xuv";
  carObj2.year = 2020;
  carObj2.color = "Black";
  carObj2.topspeed = 1300;
  carObj2.doors = 4;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << " " << carObj1.color <<" "<< carObj1.topspeed <<" "<< carObj1.doors <<"\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year <<" "<< carObj2.color <<" " << carObj2.topspeed << " " << carObj2.doors <<"\n";
  return 0;
}
