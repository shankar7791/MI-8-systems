#include<iostream>
using namespace std;
int main()
 {
   string str;
   int line = 4;

   while (line--)
   {
      getline(cin, str);

      while (str.length()==0 )
      getline(cin, str);
      
      cout << str << " : New Line" << endl;
   }
}
