#include <stdio.h>

void copystr(char*, char*);
int main()
{
    char *str1 = "I am usha"
    char str2[30];
    clrscr();
    copystr(str1, str2);
    grtch();

}

void copystr(char *dest, char *src)
{

    while(*src != '\0')
    {
        *dest++=*src++; 
        *dest='\0'; 
        return; 
       
    }
}