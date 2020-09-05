#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any two numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a==b)
    {
        c=(a+b)*3;
        printf("Sum :\n%d",c);
    }
    else
    {
        c=a+b;
        printf("Sum :\n%d",c);
    }
    
}