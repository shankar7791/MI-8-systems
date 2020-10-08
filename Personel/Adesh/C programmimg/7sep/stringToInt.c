#include<stdio.h>
#include<stdlib.h>
int
  main(){
        char str[]= "Adesh";
        char *ptr;
        //printf("Enter string to convert into unsigned long integer\n");
        //scanf("%s",&str);
        unsigned long int num;
        num= strtoul (str,&ptr,30);
        printf("\nunsigned long integer= %lu\n\n",num);
        return 0;


  }