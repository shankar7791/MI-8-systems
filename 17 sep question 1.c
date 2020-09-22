#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[200];
    int x1, x2, x3;
    int i, j, k;
	
       
	   
       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&x1);
   
       printf("Input %d elements in the array :\n",x1);
       for(i=0;i<x1;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&x2);
   
       printf("Input %d elements in the array :\n",x2);
       for(i=0;i<x2;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr2[i]);
	    }

 
    x3 = x1 + x2;
    
    for(i=0;i<x1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<x2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }

   for(i=0;i<x3; i++)
        {
           for(k=0;k<x3-1;k++)
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
    for(i=0; i<x3; i++)
    {
        printf("%d   ", arr3[i]);
    }

}
