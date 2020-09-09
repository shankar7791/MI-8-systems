#include <stdio.h>

    int mul (int, int);
    int main (void)
    {
        int total;
        total = mul (5, 6);
        printf ("The total is :  %d\n", total);
        return 0;
    }
    
    int mul (int a, int b) 
    {
	    int s;
		s=a*b;
        return s; 
    }