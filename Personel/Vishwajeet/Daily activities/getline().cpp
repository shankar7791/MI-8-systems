#include<iostream> 
#include<cstring>
using namespace std;
int main()
{
    string str;
    int term = 4;
    while (term--) {
        getline(cin, str);
        cout << str << " : New Line" << endl;
    }
    return 0;
}