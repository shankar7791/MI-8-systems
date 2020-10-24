#include<iostream>
using namespace std;
class Car 
{      
  public:          
    string brand , model;  
    int year;      
    Car(string x, string y, int z)
    {
      brand = x;
      model = y;
      year = z;
    }
};

class add 
{ 
public: 
    string brand , model;  
    int year;    
    add() 
    {
        cout<< "enter car details" << endl ;
        cin >> brand>> model>> year ;
        cout<<"data added" << endl; 

    } 
}; 

class update 
{ 
public:
    update()
    {
        cout<<"data update" << endl; 

    } 
}; 
  

int main() 
{
 // Car carObj1("Benz", "vfour", 2020);
  //Car carObj2("KIA", "rov", 2019);
  //Car carObj3("lambo", "rvi", 2021);

  //cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  //cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
  //cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << endl;

  add a;
    cout << "brand: " << a.brand << endl ;
    cout << "model: " << a.model << endl ;
    cout << "year: " << a.year << endl ;
  update u ;

    return 1; 
}
/*int dele()
{
    ~Car()
    {
        cout<<"obj destroy"<< endl;
    }
}
*/