#include <stdio.h>

void diameter(float r){
    printf("Diameter = %f\n",r*r);
}

void circumference(float r){
    //float pi = 3.14;
    printf("Circumference = %f\n",2 * 3.14 * r);
}

void area(float r){
    printf("Area = %f\n",3.14 * r * r);
}
int
main(){
    float r ;
    printf("Enter radius of circle to find Diameter , circumference and Area\n");
    scanf("%f",&r);
    diameter(r);
    circumference(r);
    area(r);
    return 0; 
}