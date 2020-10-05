#include <stdio.h>

int addnum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++)
    {

		total += *(ptr + index);

	}
    return(total);
}
