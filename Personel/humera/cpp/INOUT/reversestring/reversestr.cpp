#include<bits/stdc++.h>
using namespace std;
void reversestr(string& str)
{
    int n = str.length();
    for(int i=0;i<n/2;i++)
    swap(str[i],str[n-i-1]);
}
int main()
{
    string str="\ninput:ambertech\n";
    cout<<"ambertech";
    reversestr(str);
    cout<<"\nreverse string :";
    cout<<str;
    return 0;
}