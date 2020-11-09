#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
int main() 
{
   int ch, val;
   vector<int> vec;
   cout<<"1)Insert "<< endl;
   cout<<"2)Delete"<< endl;
   cout<<"3)Print size of the Vector"<< endl;
   cout<<"4)Display "<< endl;
   cout<<"5)Clear "<< endl;
   cout<<"6)Exit"<< endl;

   do 
   {
      cout<<"Enter your Choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         cout<<"Enter value to be inserted: "<<endl;
         cin>>val;
         vec.push_back(val);
         break;
         case 2:
         cout<<"Last Element is deleted."<<endl;
         vec.pop_back();
         break;
         case 3:
         cout<<"Size of Vector: ";
         cout<<vec.size()<<endl;
         break;
         case 4:
         cout<<"Displaying Vector Elements: ";
         for (int i = 0; i < vec.size(); i++)
         cout<<vec[i]<<" ";
         cout<<endl;
         break;
         case 5:
         vec.clear();
         cout<<"Vector Cleared"<<endl;
         break;
         case 6:
         cout<<"Exit"<<endl;
         break;
         default:
         cout<<"Error....Wrong Choice Entered"<<endl;
        }
    } 
   while (ch!=6);
   return 0;
}