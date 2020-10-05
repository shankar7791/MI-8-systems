# include <stdio.h>
void add(int *x, int *y);
int main()
{
    int a=10;
    int b=20;

    add(&a, &b);
    return 0;
}

    void add(int *x, int *y)
    {
        int z;
        z = *x + *y;
         
        printf("Addition of %d and %d = %d ", *x, *y, z);
    }