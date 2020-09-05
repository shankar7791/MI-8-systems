#include <stdio.h>

int main()
{
	    float ce, fa;
	    printf("Enter temperature in Celsius: ");
            scanf("%f", &ce);	        
	    fa = (ce * 9 / 5) + 32;
	    printf("%.2f Celsius = %.2f Fahrenheit", ce,fa);
	    return 0;
}

