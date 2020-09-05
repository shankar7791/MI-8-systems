#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	if(a==b)
		printf("%d\n",c*3);
	else
		printf("sum =%d\n",c);
}


