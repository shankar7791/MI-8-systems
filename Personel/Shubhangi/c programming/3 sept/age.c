#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Congratulations your age is %d Your elible to cast your vote", age);
    }
    else
    {
        printf("Sorry you are under age");
    }
}