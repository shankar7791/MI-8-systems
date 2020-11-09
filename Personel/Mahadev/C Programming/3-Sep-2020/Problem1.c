// Print the ASCII value of character

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: \n");
    scanf("%c", &ch);

    //%d displays the integer value of chareter valu
    printf("ASCII value of character : %c is: %d", ch, ch);
    return 0;
}