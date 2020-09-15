#include <stdio.h>  
void swap(int , int);  
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values a = %d, b = %d\n",a,b); 
    swap(a,b);  
}  
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",a,b);
}  