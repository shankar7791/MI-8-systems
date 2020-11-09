#include <algorithm> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    
    int arr[] = { 5, 4, 3, 2, 1, 0 }; 
  
     
    int n = sizeof(arr) / sizeof(arr[0]); 
  
     
    cout << "Array is: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
  
   
    reverse(arr, arr + n); 
  
    
    cout << "\nReversed Array is: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 

    return 0; 
} 