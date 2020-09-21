/*c program to convert vowels into
*uppercase character in given string*/
#include <stdio.h>
int main()
{
  char a[20];
  int i=0;
  printf("enter a lowercase word: ");
  gets(a);
  while(a[i]!='\0')
  {
    if(a[i]>95 && a[i]<122)
    {
      if(a[i]=='a' ||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      printf("%c",a[i]-32);
      else
      printf("%c",a[i]);
    }
    i++;
  }
  return 0;
}
