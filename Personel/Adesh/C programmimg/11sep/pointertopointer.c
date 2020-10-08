#include<stdio.h>  
int 
main ()  {  
    int a = 10;  
    int *p;  
    int **pp;   
    p = &a;   
    pp = &p;  
    printf("address of a: %p\n",p); 
    printf("address of p: %p\n",pp);  
    printf("value stored at p: %d\n",*p); 
    printf("value stored at pp: %d\n",**pp);
}     