#include<stdio.h>

int
main(){

    int a = 10, b = 20;
    int *p;
    printf("a= %d\nb= %d\np is pointer.\n",a,b);
    p = &a;
    printf("Now p is point of address of a.\n");
    printf("Value of p = %d\n",*p);
    b = *p;
    printf("Now b is storing value of pointer p point to an address  b = %d\n",b);
    *p = 0;
    printf("When Pointer initialize 0 value of a is also 0  a=%d\n",a);
}