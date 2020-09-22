#include <stdio.h>
void area();

int main()
{
   area();
   return 0;
}

void area()
{
    int square_area, number;

    printf("Enter the number u want to square");
    scanf("%d",&number);
    square_area = number * number;
    printf("Area of Square = %d",square_area);
}
