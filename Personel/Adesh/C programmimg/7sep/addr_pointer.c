#include <stdio.h>
int 
main(){
  int n = 100;
  float f = 100.10;
  char ch = 'a'; 
  int *pt1;
  float *pt2;
  char *pt3;
  pt1= &n;
  pt2=&f;
  pt3=&ch;
  printf("values of data\n");
  printf ( " n = %d\n",n);
  printf ( " f = %f\n",f);
  printf ( " ch = %c\n",ch);
  printf("\n Using & operator :\n"); 
  printf ( " address of n = %p\n",&n);
  printf ( " address of f = %p\n",&f);
  printf ( " address of ch = %p\n",&ch);
  printf("\n Using & and * operator :\n");  
  printf ( " value at address of n = %d\n",*(&n));
  printf ( " value at address of f = %f\n",*(&f));
  printf ( " value at address of ch = %c\n",*(&ch)); 
  return 0;  
}