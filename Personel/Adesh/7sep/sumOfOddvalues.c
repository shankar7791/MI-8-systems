#include <stdio.h>
int 
main(){
	int i, num[5], sum=0;
	printf("\nInput the 1st number: "); 
    scanf("%d", &num[0]);
    printf("\nInput the 2nd number: "); 
    scanf("%d", &num[1]);
    printf("\nInput the 3rd number: "); 
    scanf("%d", &num[2]);
	printf("\nInput the 4th number: "); 
    scanf("%d", &num[3]);
    printf("\nInput the 5th number: "); 
    scanf("%d", &num[4]);
	for(i = 0; i < 5; i++) {
		if((num[i]%2) != 0) 
		{
		   sum += num[i];
		}	
    }
   	printf("\nSum of all odd values: %d\n", sum);
	return 0;
}