#include<stdio.h>

int
main(){

    int arr[100], max , min ,i, n ;
     printf("Enter size of Array :");
       scanf("%d",&n);
   
       printf("Enter elements :\n");
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i+1);
	      scanf("%d",&arr[i]);
		
	    }
        max = arr[0];
        for(i=0;i<n;i++)
        {
            if(max < arr[i])
            max = arr[i];
        }
        min = arr[0];
        for(i=0;i<n;i++)
        {
            if(min > arr[i])
            min = arr[i];
        }
        printf("IN Array \nmaximum number : %d \nminimam number : %d\n",max,min);
        return 0;
}