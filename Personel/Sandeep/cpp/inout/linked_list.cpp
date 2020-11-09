#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  

void printl(list <int> a) 
{ 
    list <int> :: iterator it; 
    for(it = a.begin(); it != a.end(); ++it) 
        cout << '\n' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> list; 
  
  
    for (int i = 1; i <=5; ++i) 
    { 
        list.push_back(i * 2); 
    } 
    cout << "\nList  is : "; 
    printl(list);
    cout << "\nlist.front() : " << list.front(); 
    cout << "\nlist.back() : " << list.back(); 
  
    cout << "\nlist.pop_front() : "; 
    list.pop_front(); 
    printl(list); 
  
    cout << "\nlist.reverse() : "; 
    list.reverse(); 
    printl(list);
  
    return 0; 
  
} 