/* double pointer program ptr to ptr ....*/

#include <iostream>

using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var= 12345;

    ptr= &var;

    pptr= &ptr;

    cout<<"value of var is"<<var<<endl;
    cout<<"value of ptr is"<<ptr<<endl;
    cout<<"value of dptr is"<<pptr<<endl;

    return 0;

}
