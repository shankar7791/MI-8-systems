#include<stdio.h>
int main()
{
    int no;

    printf("Enter the age :");
    scanf("%d",&no);

    if(no>=18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not eligible for voting\n");
    }
    
}