#include<stdio.h>

int 
main(){
    int arr[3][3] ,i,j; 
           for(i=0;i<3;i++)
            for(j=0;j<3;j++)
             {
	            printf("Enter element: ");
	            scanf("%d",&arr[i][j]);
	         }
             printf("\nMtarix is:\n");
        for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
             {
	            printf("%d\t",arr[i][j]);
	         }
             printf("\n");
          }

}