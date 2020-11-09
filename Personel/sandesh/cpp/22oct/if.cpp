#include<iostream>

using namespace std;

int main() 
{
   
   char ch;

   

   cout << "Enter the Letter  ";
   cin >> ch;


   if (ch == 'A') 
   {
      cout << "Your Character Is A.Your Character is Vowel\n";
   } else if (ch == 'E') 
   {
      cout << "Your Character Is E.Your Character is Vowel\n";
   } else if (ch == 'I') 
   {
      cout << "Your Character Is I.Your Character is Vowel\n";
   } else if (ch == 'O') 
   {
      cout << "Your Character Is O.Your Character is Vowel\n";
   } else if (ch == 'U') 
   {
      cout << "Your Character Is U.Your Character is Vowel\n";
   } else 
   {
      cout << "try Again Letter\n";
   }

   
   return 0;
}