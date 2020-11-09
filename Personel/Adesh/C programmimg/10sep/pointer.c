#include <stdio.h>
int 
main(){
int m = 10;
int *z = &m ;
    printf("\n\n z stores the address of m  = %p\n",  z);
	printf("\n *z stores the value of m = %i\n",   *z); 
	printf("\n &m is the address of m = %p\n",   &m);
}    
                        