#include<stdio.h>
int main()
{
    int age ;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=13 && age<=19)
    {
        printf("teenage\n");

    }
    else
    {
        printf("not teenage:\n");
    }
    return 0;
}