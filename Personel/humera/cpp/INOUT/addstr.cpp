#include <bits/stdc++.h>
using namespace std;
string findsum (string str1,string str2)
{
    if(str1.length()>str2.length())
    swap(str1,str2);
    string str =" ";
    int n1=str1.length(),n2=str2.length();
    int diff=n2-n1;
    int carry =0;
    for(int i=n1-1;i>=0;i--)
    {
        int sum=((str1[i]-'0')+(str2[i+diff]-'0')+carry);
        str.push_back(sum%10+'0');
        carry =sum/10;
    }
    if(carry)
    str.push_back(carry+'0');
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    string str1 ="12345678912121212121212";
    cout<<"str1 string:"<<str1<<endl;
    string str2 ="23232444456781818181844444";
    cout<<"str2 string:"<<str2<<endl;
    cout<<"sumof str1 and str2:"<<findsum(str1,str2);
    return 0;

}
