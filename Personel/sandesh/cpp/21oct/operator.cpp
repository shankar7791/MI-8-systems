#include <iostream>
using namespace std;

int main()
 {
	int a = 11;
	int b = 5;
	int c;

	cout << "a + b is :" << a+b << endl; 

	cout << "a - b is :" << a-b << endl; 

	cout << "a * b is :" << a*b << endl; 

	cout << "a / b is :" << a/b << endl; 

	cout << "a % b is :" << a%b << endl; 

	cout << "a++ is :" << a++ << endl; 

	cout << "a-- is :" << a-- << endl; 


    
	if (a == b)
    {
		cout << "a == b is true" << endl;
	}
	else 
    {
		cout << " a == b is false" << endl;
	}

	if (a < b)
    {
		cout << "a < b is true" << endl;
	}
	else 
    {
		cout << "a < b is false" << endl;
	}

	if (a > b) 
    {
		cout << "a > b is true" << endl;
	}
	else 
    {
		cout << "a > b is false" << endl;
	}

	return 0;
}
