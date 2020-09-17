#include <stdio.h>
long add(long *, long *);
int main()
{
    long first, second, sum;
    printf("Input two integers to add\n");
    scanf("%ld%ld", &first, &second);
    sum = add(&first, &second);
    printf("sum of two numbers: = %ld\n", sum);
    return 0;
}

long add(long *x, long *y) 
{
    long sum;
    sum = *x + *y;
    return sum;
}
