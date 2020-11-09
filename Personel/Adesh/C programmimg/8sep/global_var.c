#include<stdio.h>
int a = 10;  

void function1()
{
    printf("\nFrom function Global a = %d\n", a);
}

int 
main(){
    function1();
    return 0;
}

