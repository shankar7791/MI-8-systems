#include<stdio.h>
void main()
{
    char p[] = "GODZIlla";
    int i=0;
    while(p[i] !=0)
    {
        printf("%c", *(p+i));
        i++ ;
    }

}