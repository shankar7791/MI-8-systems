//create a calculator that takes a number,a basic math operator()and a second number all from user input,and have it print the result of the mathematical operation.the mathematical operations should be wrapped inside of functions//

#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Enter the operator either + or - or * or /:";
    cin >> op;

    cout << "Enter two Numbers :";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "Addition= " << num1+num2 << endl;
        break;
    case '-':
        cout << "Substraction= " << num1-num2 << endl;
        break;
    case '*':
        cout << "Multiplication= " << num1*num2 << endl;
        break;
    case '/':
        cout << "Division= " << num1/num2 << endl;
        break;
         Default :
        //if the operator is other than +.-,* or /,error message is shown//
       cout<<"Error! operator is not correct";
        break;
    }
    return 0;
}
