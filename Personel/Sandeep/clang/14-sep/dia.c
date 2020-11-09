#include <stdio.h>
#include <math.h> 

double getDia(double radius);
double getCir(double radius);
double getArea(double radius);
double PI=3.14;
int main() 
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    dia  = getDia(radius);       
    circ = getCir(radius);  
    area = getArea(radius);          
    
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}

double getDia(double radius) 
{
    return (2 * radius);
}

double getCir(double radius) 
{
    return (2 * PI * radius); 
}
double getArea(double radius)
{
    return (PI * radius * radius); 
}