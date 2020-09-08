#include <stdio.h>
void main()
{
	unsigned long x;
	char *thestring = "1234567def", *remainderPtr;
	x = strtoul(thestring, &remainderPtr, 0);
	printf("Using strtoul() - converting string to\n");
	printf(" unsigned long, 3 arguments\n");
	printf("---------------------------------------\n\n");
	printf("The original string is \"%s\"\n", thestring);
	printf("The converted value is %lu\n", x);
	printf("The remainder of the original string is \"%s\"\n", remainderPtr);
	printf("The converted value, %lu minus 567 is %lu\n", x, x - 567);
	return 0;
}

 
