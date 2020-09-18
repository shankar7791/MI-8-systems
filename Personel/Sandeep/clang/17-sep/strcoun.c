#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str[100];
   int c = 0, co[26] = {0}, x;

   printf("Enter a string\n");
   gets(str);

   while (str[c] != '\0') 
   {
      if (str[c] >= 'a' && str[c] <= 'z')
      {
         x = str[c] - 'a';
         co[x]++;
      }
      c++;
    }

   for (c = 0; c < 26; c++)
         printf("%c occurs %d times in the string.\n", c + 'a', co[c]);

   return 0;
}
