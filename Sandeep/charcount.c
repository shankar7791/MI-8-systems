#include<stdio.h>
int main()
{
	double c;
	c=0;
	while(getchar() != EOF)
	{
		++c;
		printf("%lf\n",c);
	}
}

