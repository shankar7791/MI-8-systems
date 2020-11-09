#include<stdio.h>

int main(){

	int num1;
	float f;
	char c;
	
	printf("Enter a Character\n");
     	scanf("%c",&c);
    	printf("The character that you have entered is %c", c);

	printf("\n\nEnter number\n");
    	scanf("%d", &num1);
    	printf("The number You have entered is %d\n", num1);
    	
    	printf("\n\nEnter a Decimal number\n");
    	scanf("%f", &f); 
    	printf("\n\nThe decimal that you have entered is %f", f);
	
	return 0;

}
