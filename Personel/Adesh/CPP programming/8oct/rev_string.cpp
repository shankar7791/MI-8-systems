#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i, j;
    cout << "Enter a string : ";
    cin >> str;
    j = str.length() - 1;
    for (i = 0; i < j; i++, j--)
    {
        swap(str[i], str[j]);
    }
    cout << "Reverse String :";
    cout << str << endl;
    return 0;
}