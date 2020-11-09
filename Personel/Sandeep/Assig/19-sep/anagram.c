#include <stdio.h>
int anagram(char *[], char *[]);

int main()
{
    char a[100], b[100];
    printf("Enter two strings : \n");
    gets(a);
    gets(b);
    if (anagram(a, b) == 1)

        printf(" strings are anagrams\n");
    else
        printf(" strings are not anagrams \n ");
    
    return 0;
}

int anagram(char a[], char b[])
{
    int fr[26] = {0}, se[26] = {0}, c=0;
    while (a[c] != ‘\0’)
    {
        fr[a[c]-‘a’]++;
        c++;
    }
    c = 0;
    while (b[c] != ‘\0’)
    {
        se[b[c]-‘a’]++;
        c++;
    }
    for (c = 0; c < 26; c++)
    {
        if (fr[c] != se[c])
        return 0;
    }

return 1;
}