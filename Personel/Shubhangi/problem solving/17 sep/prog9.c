#include <stdio.h>
int main()
// cheking whether the entered character is digit or not
{
    char ch;
    
    // checking for alphabet

    printf("Check whether the character you enter is digit or not \n");
    printf("Enter a character you want to check : \n");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("the entered character is an alphabet \n", ch);
    }
    else
    {
        printf("The entered character is a digit");
    }
    return 0;
}