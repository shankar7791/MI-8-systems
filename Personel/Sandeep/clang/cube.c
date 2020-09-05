#include<stdio.h>
int main()
{
	int n,i,j=1;
	printf("input numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i;
		printf("Number is : %d and cube of the %d is : %d\n",i,i,j=j*i);
	}
}

