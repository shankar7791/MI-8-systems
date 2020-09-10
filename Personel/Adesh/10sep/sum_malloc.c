#include<stdio.h>
#include<stdlib.h>
int
main(){

    int i,n, *ptr, sum = 0;
    printf("Enter How many number you want to sum\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr = (int*)malloc(sizeof(int));
        printf("\nEnter %dth number:",i+1);
        scanf("%d",&(*ptr));
        sum+= *ptr;
    }
    printf("\nSum of Numbers= %d \n",sum);
    free(ptr);
    return 0;
}