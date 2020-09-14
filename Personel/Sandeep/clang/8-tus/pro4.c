#include <stdio.h>

static int b=10;

int main()
{
    //static int b=20;
    int a = 5;  //global variable
    {
        
        int a = 10; //local variable
        printf("value of a and b = %d %d\n",a,b);
    }
    printf("value of a and b = %d %d\n",a,b);
    return 0;
}