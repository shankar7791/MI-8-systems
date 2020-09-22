/* c program to count frequency of each character in a string*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100//maximum string MAX_SIZE
int main()
{
  char str[MAX_SIZE];
  int i,len;
  int freq[26];
  /*input string from user */
  printf("enter any string: ");
  gets(str);
  len=strlen(str);
  /*initialise frequency of each character to 0*/
  for(i=0;i<26;i++)
  {
    freq[i]=0;
  }
  /*find total number of occurances of each character*/
  for(i=0;i<len;i++)
  {
    if(str[i]>='a'&&str[i]<='z')
    {
      freq[str[i]-97]++;
    }
    else if(str[i]>='A'&& str[i]<='Z')
    {
      freq[str[i]-65]++;
    }
  }
  /*print the frequency of all characterin the string*/
  printf("\nfrequency of all characters in the given string: \n");
  for(i=0;i<26;i++)
  {
    if(freq[i] !=0)
    {
      printf("'%c'=%d\n",(i+97),freq[i]);
    }
  }
  return 0;
}
