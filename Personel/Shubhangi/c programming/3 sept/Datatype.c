#include <stdio.h>
#include <conio.h>
int main()
{
    int number1;
    char ca;
    float number2;
    double number3;

    printf("enter float Number :  \n");
    scanf("%f", &number2);

    printf("enter Double Number \n");
    scanf(" %lf", &number3);

    printf("enter Int number \n");
    scanf("%d", &number1);

    printf("enter character \n");
    scanf(" %c", &ca);

printf("float Number is : %f", number2);
printf("\n Double Number is : %lf", number3);
printf("\n Int Number is : %d", number1);
printf("\n character is : %c", ca);
    return 0;
}