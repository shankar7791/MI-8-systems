#include<stdio.h>
int main() 
{ 
	int *p; /* wild pointer */

	int x = 10; 

	// p is not a wild pointer now 
	p = &x; 
    printf("value = %p", );

	return 0; 
} 
