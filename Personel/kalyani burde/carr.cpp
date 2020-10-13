#include <iostream>
#include <string>
using namespace std;

// car class//
class car
{
public:
    string brand;
    string model;
    int year;
};
int main()
{
    car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1990;

    car carObj2;
    carObj2.brand = "ford";
    carObj2.model = "mustang";
    carObj2.year = 1961;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
