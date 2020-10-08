#include<stdio.h>
int addtion(int *, int *);

int 
main(){

    int a,b , sum=0;
    printf("Enter number to Addtion :\n");
    scanf("%d%d",&a,&b);
    sum=addtion(&a,&b);
    printf("Addtion of Numbers is = %d\n",sum);
    return 0;
}

int addtion(int *x,int *y)
{
    return *x+*y;
}