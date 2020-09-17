#include <stdio.h>
#include <stdlib.h>

void sub(int a, int b);

void sub(int a, int b) {
    int c = a - b;
    printf("Substraction is %d: ",c);
}