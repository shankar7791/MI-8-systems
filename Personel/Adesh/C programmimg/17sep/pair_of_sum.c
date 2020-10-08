#include<stdio.h>

int 
main(){
int arr[100] ,i, j,n, sum ,flag = 0;
     printf("Enter size of Array :");
       scanf("%d",&n);
   
       printf("Enter elements :\n");
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i+1);
	      scanf("%d",&arr[i]);
	    }
        printf("\nEnter sum you want to find:");
        scanf("%d",&sum);

        for (i = 0; i < n - 1; i++)
	    {
	    	for (j = i + 1; j < n; j++)
		    {
		
			    if (arr[i] + arr[j] == sum)
			    {   flag = 1;
				    printf("\nSum of Pair found at element %d and %d", i+1, j+1);
    			}
	    	}
	    }
        if(flag==0)
	printf("Pair not found\n");
    return 0;
}