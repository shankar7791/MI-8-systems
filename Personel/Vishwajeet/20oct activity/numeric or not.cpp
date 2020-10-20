#include <iostream>
#include <stdio.h>
using namespace std;
bool check_number(string str) {
   int i, flag=0,n=0;
   char s[50];
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
       return false;
       return true;
}
int main() {
   int i;
   char s[50];
   
   string str = gets(s);
   if (check_number(str))
      cout<<str<< " is an numeric"<<endl;
   else
      cout<<str<< " is a non numeric"<<endl;
   return 0;
   
}