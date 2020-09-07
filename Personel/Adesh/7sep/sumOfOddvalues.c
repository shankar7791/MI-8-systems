#include <stdio.h>
int 
main(){
	int i, num[10], sum=0;
	int n;
	printf("Enter how many number you want?");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		{
		  printf("\nInput the %d number: ",i); 
    		  scanf("%d", &num[i]);
		}
	for(i = 0; i < n; i++) {
		if((num[i]%2) != 0) 
		{
		   sum += num[i];
		}	
    }
   	printf("\nSum of all odd values: %d\n", sum);
	return 0;
}
