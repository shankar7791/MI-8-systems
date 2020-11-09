#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char * st = str;
    int alp=0, dig=0, spl=0;
    printf("Enter any string : ");
    gets(str);

    while(*st)
    {
        if((*st >= 'a' && *st <= 'z') || (*st >= 'A' && *st <= 'Z'))
            alp++;
        else if(*st>='0' && *st<='9')
            dig++;
        else
            spl++;

        st++;
    }

    printf("Alphabets = %d\n", alp);
    printf("Digits = %d\n", dig);
    printf("Special characters = %d", spl);

    return 0;
}
