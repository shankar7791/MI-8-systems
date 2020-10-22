// Print a year a leap yr or not//

#include <iostream>

using namespace std;


bool checkYear(int year)
{
    if (year % 4 == 0)

        return true;

    else

        return false;
}
int main()
{

    int year;
    cout << "Enter year to check leap or not :";
    cin >> year;

    checkYear(year) ? cout << "Leap Year" : cout << "Not a Leap Year";

    return 0;
}