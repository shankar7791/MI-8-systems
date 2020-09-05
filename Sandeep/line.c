#include<stdio.h>
int main()
{
	int c,n=0;
	printf("enter content at last exit and it shows lines count ");

	while ((c = getchar()) !=EOF)
		if(c == '\n')
			++n;
	printf("%d\n",n);
	return 0;
}

