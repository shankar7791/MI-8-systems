//Print size of variables using sizeof() operator
#include <stdio.h>
void main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int :%ld bytes \n", sizeof(intType));
    printf("Size of float :%ld bytes \n", sizeof(floatType));
    printf("Size of double :%ld bytes \n", sizeof(doubleType));
    printf("Size of char :%ld bytes \n", sizeof(charType));
}