#include <iostream> 
#include<string.h>
using namespace std; 
int main() 
{ 
    int freq[26] = { 0 }; 
    char str[10] ;
    int max = -1; 
    char result; 
    int len = strlen(str); 
   
    cin >> str; 
    
    for (int i = 0; i < len; i++) 
        freq[str[i] - 'a']++; 
    for (int i = 0; i < 26; i++) 
        if (max < freq[i])
        { 
            max = freq[i]; 
            result = (char)(i + 'a'); 
        } 
    cout << "Maximum occurring character = "<< result<< endl; 
    return 0;
}