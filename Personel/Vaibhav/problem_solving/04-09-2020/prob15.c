 /*Using ‘&' operator, check whether a integer number is odd or even*/
 
#include<stdio.h>
int 
main()
{
	int num,rem;
                 
   	printf(" Enter an integer number: ");
  	scanf("%d",&num);
               
        rem = num & 1;                      //Bitwise Operator '&' used
                 
        if(rem == 0)
        {
        	printf("\n %d is an even number.",num);
        }
        else{
                 printf("\n %d is an odd number.",num);
         }        
	return 0;
}
