#include<stdio.h>
void incr_point(int*);
int 
main(){

int *ptr=(int *)1000;
printf("Value of ptr : %u\n",ptr);
ptr=ptr+1;
printf("New Value of ptr : %u\n",ptr);
incr_point(ptr);
return 0;
}

void incr_point(int *pt)
{
    pt=pt+1;
    printf("In function  Value of ptr : %u\n",pt);
 
}