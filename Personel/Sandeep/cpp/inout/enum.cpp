#include <iostream>
using namespace std;

int main()
{
    enum week{SUN=0,MON,TUE,WED,THU,FRI,SAT};    
    enum week day;
    enum week ends;
    day = THU;
    ends = SAT;
    cout<<"Week day number : "<< day <<endl ;
    cout<<"Week_ends number : "<< ends <<endl ;
    return 0;
} 