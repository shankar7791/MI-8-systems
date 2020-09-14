#include <stdio.h>
#include <stdlib.h>

void add(int a, int b);

void add(int a, int b) {
    int c = a + b;
    printf("Addition is %d: ",c);
}