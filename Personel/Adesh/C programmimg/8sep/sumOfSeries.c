#include<stdio.h>
int
main(){
    int i,n,fact = 1;
    float sum = 0.0;
    printf("Enter Value of n:");    
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      fact = fact * i;
      sum = sum + (fact/i);
    }
    printf("\nThe value of series is %f\n",sum);
    return 0;
} 