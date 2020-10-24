//Calculate length of string using ptr//

#include <iostream>
using namespace std;

int string_ln(char *);
int main()
{
    char str[10];
    int lenght;
    cout << " \n Enter any string:";
    cin >> str;
    lenght = string_ln(str);
    cout << " The Length of given string :" << lenght << endl ;
   
}
int string_ln(char *ptr)
{
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
};