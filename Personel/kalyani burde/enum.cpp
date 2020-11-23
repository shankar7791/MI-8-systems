#include<iostream>

using namespace std;
enum seasons
{
    spring=0,
    summer=2,
    autumn=8,
    winter=12,
};
int main()
{
     seasons s;
     s=summer;
     cout<<"Summer ="<<s<<endl;
     s=spring;
     cout<<"Spring ="<< s<< endl;
     s=autumn;
     cout<<"autumn ="<<s<<endl;
     s=winter;
     cout<<"winter ="<< s<< endl;
     
     return 0;
}