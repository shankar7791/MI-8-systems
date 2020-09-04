//Read formatted time (in HH:MM:SS) through scanf in C program

#include <stdio.h>
void main()
{
    int h, m, s;

    printf("\n Enter Time (in HH:MM:SS)");
    scanf("%02d:%02d:%02d", &h, &m, &s);

    printf("Entered time is %02d:%02d:%02d\n", h, m, s);
}