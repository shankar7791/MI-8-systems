#include<stdio.h>
void copstr(char*, char*);
int main()
{
    char source[100], des[100];    
    printf("Enter source string\n");    
    gets(source);    
    copstr(des, source);    
    printf("destation string is \"%s\"\n", des);    
    return 0;
}

void copstr(char *des, char *source)
{
    while(*source)
    {
        *des = *source;        
        source++;        
        des++;
    }    
    *des = '\0';
}