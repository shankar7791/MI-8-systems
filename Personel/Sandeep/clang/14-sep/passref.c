#include <stdio.h>
 int cube( int *x);
 int main()
{
    int n ,c;
    printf("Enter any number:\n");
    scanf("%d",&n);
    c=cube(&n);
    printf("the cube of the given number is %d\n", c);
    return 0;
}
 int  cube(int *x)
{
    *x = (*x) * (*x) * (*x);
    return *x;
}