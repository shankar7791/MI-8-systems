/*C Program to Count the Number of Trailing Zeroes in Integer*/
#include<stdio.h>
int
main()
{
 	int n;
 	int cnt = 0;
 
 	printf("Enter an Integer:\n");
 	scanf("%d",&n);
 	while(1)
 	{
     		if((n&1)==1)
     		{
         		break;
     		}
     		cnt++;
     		n=n>>1;
 	}
	if(cnt == 0) 
	{
    		printf("There are no Trailing Zeros. \n");
	}
	else
	{
    		printf("There are %d Trailing Zeros.", cnt);
	}
 	return 0;

}
