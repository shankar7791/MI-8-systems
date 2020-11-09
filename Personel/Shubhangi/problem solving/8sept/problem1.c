#include <stdio.h>
//function declaration
int sum(int, int);
int main(void)
{
    int total;
    printf("\n\n Function : a simple structure of function :\n");
    //function call
    total = sum(5, 6);
    printf("The total is :  %d\n", total);
    return 0;
}
//function definition
int sum(int a, int b)
{
    int s;
    s = a + b;
    return s; //function returning a value
}
