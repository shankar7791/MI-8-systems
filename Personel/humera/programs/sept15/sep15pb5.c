//c program to concatenate two strings
//using strcat()
#include <stdio.h>
#include<string.h>
main()
{
      char s1[100], s2[100];
      printf("\n enter the first string: ");
      gets(s1);
      printf("\n enter the second string: ");
      gets(s2);
      strcat(s1,s2);
      printf("\n concatenated string : %s",s1);
      return 0;
}
