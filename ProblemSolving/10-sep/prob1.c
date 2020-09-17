//Problem 1: Read a memory address using scanf() and print its value in C.

#include <stdio.h>

int main(void)
{

	int num = 123;
	int *ptr; //to store memory address

	printf("Memory address of num = %p\n", &num);

	printf("Now, read/input the  memory address: ");
	scanf ("%p", &ptr);

	printf("Memory address is: %p and its value is: %d\n", ptr, *ptr);

	return 0;
}
