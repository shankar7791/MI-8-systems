#include<stdio.h>
 
int string_ln(char*);
 
int 
main(){
   char str[20];
   int length;
   printf("\nEnter a string : ");
   scanf("%s",&str);
   
   length = string_ln(str);
   printf("The length of the string  : %d\n", length);
   return 0;
}
 
int string_ln(char *p) 
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}