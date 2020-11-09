// how to use getline()in c++ when there are blank lines in input //

#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    string str;
    while (t<=2)
    {
        getline(cin, str);
        cout << str << ":Blank line" << endl;
        t++;
    }
    return 0;
};