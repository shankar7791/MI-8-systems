#include<stdio.h>
int strln(char*);
int main()
{
   char str[20];
   int len;
   printf("Enter any string :: ");
   scanf("%s",str);
   len = strln(str);
   printf("\nThe length of the given string %s is : %d\n", str, len);
   return 0;
}
 int strln(char*p) 
{
   int count = 0;
   while (*p != '\0') 
   {
      count++;
      p++;
   }
   return count;
}