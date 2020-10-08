#include <stdio.h>

void swap(int *, int *);
int 
main(){
    int num1 = 10, num2 = 20;
 
    printf("Before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping call by reference num1 = %d num2 = %d \n", num1,num2);
    return 0;
}

void swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}