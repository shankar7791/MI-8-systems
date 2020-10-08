#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("AmberSoft Pune ");

    string str2(str1);

    string str3(7, '$');

    string str4(str1, 10, 4);
    string str5(str2.begin(), str2.begin() + 10);

    cout << endl;
    cout << "str1 :"<< str1 << endl;
    cout << "str2 :"<< str2 << endl;
    cout << "str3 :"<< str3 << endl;
    cout << "str4 :"<< str4 << endl;
    cout << "str5 :"<< str5 << endl;
    cout << endl;
    cout << "Compare String 1 and 2\n" ;
    if ( str1.compare(str2) == 0 ) 
        cout << "Strings are equal\n"; 
    else 
        cout << "Strings are unequal\n";
    cout << endl;

    cout << "First occurrence of \"Pune\" starts from : ";
    cout << str1.find("Pune") << endl;
    cout << endl;

    str2.insert(10, "Tech ");
    cout << "Insert String: " << str2 << endl;
    cout << endl;

    str2.append("India");
    cout << "Append String: " << str2 << endl;
    cout << endl;
    return 0;
}