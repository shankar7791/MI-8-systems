#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if (a >= 0){
        printf("%d Number is positive \n",a);
    }
    else
    {
    printf("%d Number is negative",a);
    }
    
}