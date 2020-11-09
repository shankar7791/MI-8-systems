/*C program to Concatenate two strings */
#include <stdio.h>

int main()
{
  //get the two strings to be concatenated
  char str1[100] ="humera", str2[100]="Tamkeen";
  //declare new strings
  //to store the concatenated strings
  char str3[100];
  int i=0, j=0;
  printf("\nfirst string :%s",str1 );
  printf("\nsecond string :%s",str2);

  //insert the first string into the new string
  while(str1[i] != '\0')
  {
    str3[j]=str1[i];
    i++;
    j++;
  }
  //insert second string in new string
  i=0;
  while(str2[i] != '\0')
  {
    str3[j] =str2[i];
    i++;
    j++;
  }
  str3[j] ='\0';
  printf("\nconcatenated string : %s",str3);
  return 0;
}
