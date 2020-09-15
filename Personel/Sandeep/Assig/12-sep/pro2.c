#include <stdio.h>
extern int n = 32;
int b=8,c=99,e=9;

int main() 
{
   int a = 28;
   extern int b;
   static int e=2;
   printf("The value of extern variables n and b : %d %d\n",n,b);
   n = 15;
   printf("After change value of extern variable n : %d\n",n);
   printf("size of extern variable b= %ld\n",sizeof(b));
   printf("local variable val a=%d\n",a);
   printf("global variable val c=%d\n",c);
   printf("static variable val e=%d\n",e);
   e++;
   printf("static variable after increment val e=%d\n",e);
   return 0;
}