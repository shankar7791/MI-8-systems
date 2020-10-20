#include<iostream>
using namespace std;
int main()
 {
   string str;
   int term = 4;

   while (term--)
   {
      getline(cin, str);

      while (str.length()==0 )
      getline(cin, str);
      
      cout << str << " : New Line" << endl;
   }
}
