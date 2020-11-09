#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int assessment_operators();
int logical_operators();
int relational_operators();
int less_than();
int greater_than();
int equals_to();
int arithmetic_operators();
int addition();
int subtraction();
int multiplication();
int division();


int main()
{
    int choice;
    do
    {
        cout << "\n\nMain Menu";
        cout << "\n1. Arithmetic operators";
        cout << "\n2. Relational operators";
        cout << "\n3. Logical operators";
        cout << "\n4. Assessment operators";
        cout << "\n5. Exit";
        cout << "\nPlease select your choice (1-5): ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                arithmetic_operators ();
                break;
            case 2:
                relational_operators ();
                break;
            case 3:
                logical_operators ();
                break;
            case 4:
                assessment_operators ();
                break;
        }
    }while (choice != 5);
    return 0;
}


int assessment_operators()
{
    int x,y ;
    cout << " Enter input variable y: ";
    cin >> y;
    x = y;
  cout<<"\nValue of x = "<<x<<endl;
  
  int a = 3,b = 5,c = 8;
  a += b;
  c -= b;
  cout<<"\na += b: "<<a;
  cout<<"\nc -= b: "<<c;
  
  a *= b;
  b /= c;
  cout<<"\na *= b: "<<a;
  cout<<"\nb /= c: "<<b;
  
  return 0;
}

int logical_operators()
{
    
    int a = 5;
    int b = 9;
  
    cout << ((a == 0) || (a > b)) << endl;
 
    cout << ((a == 0) || (a < b)) << endl;

    cout << ((a == 5) || (a > b)) << endl;

    cout << ((a == 5) || (a < b)) << endl;

    return 0;
}


int relational_operators()
{
int choice;
    do
    {
        cout << "\n\nMain Menu";
        cout << "\n1. Less than";
        cout << "\n2. Greater than";
        cout << "\n3. Equal to";
        cout << "\n4. Exit";
        cout << "\nPlease select your choice (1-4): ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                less_than();
            break ;
            case 2:
                greater_than();
            break ;
            case 3:
                equals_to();
            break ;
         }
    } while(choice !=4);
    return 0;
}

int less_than()
{
   int a,b;
   cout << "Enter the two number for check the number is less than or not :";
   cin >> a;
   cin >> b;
   if( a < b ) 
   {
      cout << "A is less than B" << endl ;
   } 
   else 
   {
      cout << "A is greater than B" << endl ;
   }
   
   return 0;
}

int greater_than() 
{
   int a,b;
   cout << " Enter the two number for check the number is greater than or not :";
   cin >> a;
   cin >> b;
   if( a > b ) 
   {
      cout << "A is greater than to B" << endl ;
   } 
   else 
   {
      cout << "A is not less than to B" << endl ;
   }
   return 0;
}

int equals_to() 
{
    int a,b;
    cout << " Enter the two number for check the number is equal or not :";
    cin >> a;
    cin >> b;
    if( a == b ) 
    {
      cout << "A is equal to B" << endl ;
    } 
    else 
    {
      cout << "A is not equal to B" << endl ;
    }
    return 0;
}

int arithmetic_operators() 
{
   int choi;
   
   do
    {
        cout << "\n\nMain Menu";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";    
        cout << "\n5. Exit";
        cout << "\nPlease select your choice (1-5):";
        cin >> choi;
        switch (choi)
        {
            case 1:
                addition();
            break ;
            case 2:
                subtraction();
            break ;
            case 3:
                multiplication();
            break ;
            case 4:
                division();
         } 
        
     }while (choi != 5);
     return 0;
}

int addition()
{
    int a,b,c;
    cout << "Enter the two number for addition : ";
    cin >> a;
    cin >> b;
    c = a + b;
    cout << " Addition = :" << c << endl ;
    return 0;
}
            
int subtraction()
{
    int a,b,c;
    cout << "Enter the two number for substation : ";
    cin >> a;
    cin >> b;
    c = a - b;
    cout << "Substraction = :" << c << endl ;
    return 0;
}

int multiplication()
{
    int a,b,c;
    cout << "Enter the two number for multi?plication";
    cin >> a;
    cin >> b;
    c = a * b;
    cout << "Multiplication = :" << c << endl ;       
    return 0;
}

int division()
{
    int a,b,c;
    cout << "Enter the two number for division";
    cin >> a;
    cin >> b;
    c = a / b;
    cout << "division = :" << c << endl ;
    return 0;
}