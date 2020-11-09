#include<stdio.h>
void swap(int * , int *);
int
main(){

    int a , b;
    printf("Enter the number for swap\n");
    scanf("%d%d",&a,&b);
    printf("Before swap a = %d and  b= %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d and  b= %d\n",a , b);
    return 1;
}

void swap (int *x , int *y)
{
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
}