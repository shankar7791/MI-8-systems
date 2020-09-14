#include <stdio.h>
#include <stdlib.h>

void mul(int a, int b);

void mul(int a, int b) {
    int c = a * b;
    printf("Multiplication is %d: ",c);
}