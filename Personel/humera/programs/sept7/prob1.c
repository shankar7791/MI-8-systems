/*c program to convert a string to an unsigned long integer*/
#include <stdio.h>
#include <stdlib.h>
    int main()
    {
        char buffer[123];
        unsigned long ul;
        printf("\ninput an unsigned number:");
        fgets(buffer,123,stdin);

        ul=strtoul(buffer,NULL,0);
        printf("output:%lu\n\n",ul);
        return 0;
      }
