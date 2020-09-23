#include <stdio.h>

extern int addnum(int *ptr);

void main()
{
	static int array[5] = { 200, 400, 600, 800, 1000 };
	int sum;
  	int addnum(int *ptr);

    sum = addnum(array);
    printf("Sum of all array elements = %5d\n", sum);
}
