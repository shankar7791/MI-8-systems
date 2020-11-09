
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
    enum Gender { Male, Female };
 
    Gender gender = Male;
 
    switch (gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}
