#include<stdio.h>
#include "demo.c"
 
//int string_ln(char*);
 
int 
main(){
   char str[20];
   int length;
   printf("\nEnter a string : ");
   scanf("%s",&str);
   
   length = string_ln(str);
   display();
   printf("The length of the string  : %d\n", length);
   return 0;
}
 
