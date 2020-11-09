/*Write a program in C to demonstrate the use of &(address of) and *(value at address) operator*/

#include <stdio.h>

int 
main(){
  	int i=500;
  	float f = 32454.76;
  	char c = 'A';
  	
  	int *pt1;
  	float *pt2;
  	char *pt3;
  
  	pt1= &i;
  	pt2=&f;
  	pt3=&c;
  	
  	printf ( " integer = %d\n",i);
  	printf ( " float = %f\n",f);
  	printf ( " character = %c\n",c);
 
 	printf("\n Using & operator :\n"); 
 
  	printf ( " address of i = %p\n",&i);
  	printf ( " address of float = %p\n",&f);
  	printf ( " address of character = %p\n",&c);
  	
  	printf("\n Using & and * operator :\n"); 
   
  	printf ( " value at address of integer = %d\n",*(&i));
  	printf ( " value at address of float = %f\n",*(&f));
  	printf ( " value at address of character = %c\n",*(&c));
  
  	printf("\n Using only pointer variable :\n"); 
   
  	printf ( " address of integer = %p\n",pt1);
  	printf ( " address of float = %p\n",pt2);
  	printf ( " address of character = %p\n",pt3);
  
  	printf("\n Using only pointer operator :\n"); 
   	printf ( " value at address of integer = %d\n",*pt1);
  	printf ( " value at address of float= %f\n",*pt2);
  	printf ( " value at address of character= %c\n\n",*pt3);
}

