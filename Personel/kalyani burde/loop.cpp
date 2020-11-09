// Write any menu driven program for for,while and do-while;//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, sum,count;
    sum = 0;
    char ch;
    cout << "Enter the positive integer:";
    cin >> num;
{
        cout << "\n1.for loop \n2.while loop \n3.do_while loop";
    cout << "Enter the positive integer:";
    cin >> num;
    switch (ch)
    {
    case 1:
    {
        for (int count = 1; count <= num; ++count)
            ;

        {
            sum += count;
        }
        cout << "Sum =" << sum << endl;
    }
    case 2:
    {
        while (num >= 0)
        {
            cout << num << " ";
            sum += num;
        }
        cout << "\n The sum is" << sum << endl;
    }
    case 3:
    {
        do
        {
            sum += num; // take input from user//
        } while (num >= 0);
        {
            cout << " \n The sum is " << sum << endl;
        }
    }
    }
        return 0;
}
};