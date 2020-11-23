// Find factorial using ptr//

#include <iostream>
using namespace std;
void findfactorial(int, int *) ;
int main()
{
    int i, fact, num;
    cout << "\n Enter a number:";
    cin >> num; // take input from user//
    findfactorial(num ,& fact);
    cout << "Factorial of" << num << "is:" << fact;
    return 0;
}
void findfactorial(int num, int *fact)
{
    int i;
    *fact = 1;
    for (i - 0; i <= num; i++)
    {
        *fact = *fact * i;
    }
};
