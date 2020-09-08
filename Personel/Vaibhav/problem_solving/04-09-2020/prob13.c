/* C program to counter number of 1's in an integer number*/

#include<stdio.h>
void 
main()
{
    int i=0;
    int num;
    int cnt=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    
    for(;i<(sizeof(int)*8);i++)
    { 
    	if(1&num) cnt++; num = num>>1;
    }
    printf("\nThe number of set bits are %d \n", cnt);
}
