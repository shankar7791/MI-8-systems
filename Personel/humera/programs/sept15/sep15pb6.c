// c program reverse string without using
//library functio
#include <stdio.h>
#include <string.h>
int main()
  {
    char str[100], temp;
    int 1, j=0;
    printf("\n enter the string: ");
    gets(str);
    i=0;
    j=strlen(str)-1;

    while(i<j)
    {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++;
      j--;

    }
    printf("\n reverse string is:%s",str);
    return 0;
    
  }
