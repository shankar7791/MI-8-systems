#include<stdio.h>
#define LOW 0		//these are predefine macros we can't change these values untile the block
#define UPP 300	
#define STEP 20

int main()
{
	int far;
	for(far=LOW;far<=UPP;far=far+STEP)
	{
		printf("%d %6.1f\n",far,(5.0/9.0)*(far-32));
	}
	return 0;
}

