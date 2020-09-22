#include<stdio.h>

extern int func(int a, int b);  // function definition

int main()
{
    // function pointer
    int(*fptr)(int , int);

    // assign address to function pointer
    fptr = func;

    // function calling
    //func(2,3);
    fptr(2,3);  // calling a function referring to pointer to a function

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
