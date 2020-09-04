/*Program to get minimum number of bits to store an integer number.*/

#include <stdio.h>
int main()
{
	int num,count=0,i;
	printf("Enter an integer number :");
	scanf("%d",&num);
    if(num==0)
    {
        printf("total number of bits requried %d",num);
    }
	for(i=0; i< 32; i++)
	{	
		if( (1 << i) & num)
			count=i;
	}
    printf("Total number of bits required = %d\n",num);

}
