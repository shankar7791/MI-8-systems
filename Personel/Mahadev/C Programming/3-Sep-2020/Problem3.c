//Convers Centigrade to Fehrenheit

#include <stdio.h>
int main()
{
    float celsius, farhn;

    printf("\n Enter temperaure in celsius: ");
    scanf("%f", &celsius);

    //celsius to fahrenheit formula
    farhn = (celsius * 9.0 / 5.0) + 32;

    //Print the floating point, 6 characters after decimail point
    printf("%.6f celsius =%.6f Fahrenheit", celsius, farhn);
    return 0;
}