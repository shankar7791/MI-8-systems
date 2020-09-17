#include <stdio.h>
#include <stdlib.h>

void mod(int a, int b);

void mod(int a, int b) {
    int c = a % b;
    printf("Modulus is %d: ",c);
}