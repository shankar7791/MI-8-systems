#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   printf("Enter a string: ");
   scanf("%[^\n]",s);
   printf("In Upper Case:\n");
   puts(strupr(s));
   return 0;
}