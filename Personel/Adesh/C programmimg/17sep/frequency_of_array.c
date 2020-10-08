#include <stdio.h>

int
main(){
    int arr1[100], fr1[100];
    int n, i, j, ctr;
       printf("Enter size of Array :");
       scanf("%d",&n);
   
       printf("Enter elements :\n");
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i+1);
	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
    return 0;
}