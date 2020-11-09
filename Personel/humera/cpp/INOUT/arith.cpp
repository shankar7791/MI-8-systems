#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int sum,sub,mul,mod;
    float div;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;

    sum =num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    mod=num1%num2;
    div=(float)num1/num2;
    cout<<"sum :"<<sum<<endl;
    cout<<"difference:"<<sub<<endl;
    cout<<"multiplication: "<<mul<<endl;
    cout<<"modulus:"<<mod<<endl;
    cout<<"qoutient of number 1 and number 2:"<<div<<endl;
    return 0;
}
