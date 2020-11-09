#include <stdio.h>
int main() 
{
	int j, a[5],total=0;
	
	printf("\nInput the first number: "); 
    	scanf("%d", &a[0]);
    	
    	printf("\nInput the second number: "); 
    	scanf("%d", &a[1]);
    
    	printf("\nInput the third number: "); 
    	scanf("%d", &a[2]);
    
	printf("\nInput the fourth number: "); 
    	scanf("%d", &a[3]);
    
   	printf("\nInput the fifth number: "); 
    	scanf("%d", &a[4]);
    	
	for(j = 0; j < 5; j++)
	{
		if((a[j]%2) != 0) 
		{
		   	total += a[j];
		}	
    	}
   	
   	printf("\nSum of all odd values: %d", total);
	return 0;
}

