#include <iostream>
using namespace std;

int main()
{
    int a, b, res;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    res = a + b;
    cout << a << " + " << b << " = " << res << endl; 
    res = a - b;
    cout << a << " - " << b << " = " << res<< endl;    
    res = a * b;
    cout << a << " * " << b << " = " << res<< endl;
    res = a / b;
    cout << a << " / " << b << " = " << res<< endl;      

    return 0;
}