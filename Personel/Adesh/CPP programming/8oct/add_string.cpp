#include <bits/stdc++.h>
#include <iostream> 
#include <string>
using namespace std;

int main()
{
    string str, str1, str2;
    int i, j, x, y, n;
    string str3(49, '0');
    cout << "Enter a 1st string : ";
    cin >> str1;
    x = str1.length();

    cout << "Enter a 2st string : ";
    cin >> str2;
    y = x = str2.length();

    /*if(x<y)
        {
            n=y-x;
            for(i=0;i<n;i++)
            {
                str2.insert(1, "0");
            }
        }
        */
       int p = 1;
    for (i = 0, j = 0; i < x, j < y; i++, j++)
    {   
        int a = str1[i];
        int b = str2[j];
        int c = a + b;
        cout << c << endl;
        str[i]= c;
        //int(str[i]) = int (int (str1[i]) + int (str2[j]));
    }
    
    
    cout << "Addition is:";
    cout << str << endl;
    return 0;
}