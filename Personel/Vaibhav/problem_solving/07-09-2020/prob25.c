/*C - Read Formatted Time Once through Scanf in C Language.*/
 
#include <stdio.h>
 
int 
main(){
    	int hr,min,sec;
     
    printf("Enter time (in HH:MM:SS) ");
    scanf("%02d:%02d:%02d",&hr,&min,&sec);
     
    printf("Entered time is  %02d:%02d:%02d\n",hr, min, sec);
     
    return 0;   
}

