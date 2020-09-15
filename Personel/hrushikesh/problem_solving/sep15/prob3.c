#include<stdio.h>
int main()
{

  float centigrade,fahrenheit;

  printf("Enter the temperature in(CENTIGRADE)::");
  scanf("%f",&centigrade);

  fahrenheit=(centigrade*9/5)+32;

  printf("\n%.2f fahrenheit\n",fahrenheit);

  return 0;

  }
