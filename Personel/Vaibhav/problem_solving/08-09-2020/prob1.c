/* Write a program in C to show the simple structure of a function */

#include <stdio.h>

    int sum (int, int);
    int main ()
    {
        int total;
	printf("\n\n Function : a simple structure of function :\n");
			
        total = sum (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }
    
    int sum (int a, int b) {
	int s;
	s=a+b;
        return s; 
    }

