#include<stdio.h>

void main()
{
	
	float c, f;
	printf("Enter temperature in Celsius : ");
	scanf("%f",&c);
	f=(1.8 * c) + 32;
	printf("\nTemperature in Fahrenheit = %f",f);
	
}
