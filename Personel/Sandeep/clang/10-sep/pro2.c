#include <stdio.h>
int main()
{
	int x=20;	
	int *ptr;	
	ptr=&x;		
    printf("Memory address of x: %p\n",ptr);
	printf("Value x: %d\n",*ptr);
	return 0;
}