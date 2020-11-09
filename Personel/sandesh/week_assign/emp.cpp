#include <iostream>
#include <string>
using namespace std;

class info {
  public:
    string name;
    int id;

public:
  void info
  {
    cout << "enter name";
    cin  >>  name;
    cout << "enter id";
    cin  >> id;

  }
};

class basicinfo {

public:
  string add;
  int age;

public:
  void basicinfo
  {
     cout << "enter emp address";
     cin  >> add;
     cout << "enter emp age";
     cin >> age;
  }
};

void print_emp()
{

 cout << "Name =" << name;
 cout << "Id= =" << id;
cout << "Add =" << add;
cout << "Age =" << age;
}


int main()
{
  employee emp;
  emp.print_emp();

return 0;  
}
