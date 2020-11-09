#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
    char sample[20]; 
    int x, y;
    cout << "Enter Some text:";
    cin >> sample; 
    cout <<"Your Text is:"<< sample <<"\n";
    cout << "Enter Two numbers\n" <<"Enter 1st:";
    cin >> x;
    cout <<"Enter 2nd :";
    cin >> y;
    cout << "Addition:"<<x+y<<"\n";
    cout << "Subtraction:"<<x-y<<"\n";
    cout << "Multiplication:"<<x*y<<"\n";
    cout << "Division:"<<x/y<<"\n"; 

  
    return 0; 
} 