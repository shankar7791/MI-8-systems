#include<stdio.h>
 

void function1()
{   static int a = 10; 
    printf("\nFrom function Local a = %d\n", a);
}

int 
main(){
    function1();
    return 0;
}

