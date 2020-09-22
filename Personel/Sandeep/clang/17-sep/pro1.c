#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[200],s1, s2, s3, i, j, k;
	   
       printf("enter elements into the first array :");
       scanf("%d",&s1);
       printf("Input %d elements in the array :\n",s1);
       for(i=0;i<s1;i++)
        {
	      scanf("%d",&arr1[i]);
	    }
       printf("enter elements into the second array :");
       scanf("%d",&s2);
       printf("Input %d elements in the array :\n",s2);
       for(i=0;i<s2;i++)
        {
	      scanf("%d",&arr2[i]);
	    }
    s3 = s1 + s2;
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
        }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }
   for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-1;k++)
            {
         
                if(arr3[k]<=arr3[k+1])
                {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                }  
            }
        }                   
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s3; i++)
    {
        printf("%d   ", arr3[i]);
    }
	printf("\n");
}