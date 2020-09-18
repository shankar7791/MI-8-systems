#include <stdio.h>
int main()
{
  int arr[3][3],i,j;
  printf("these is an 3*3 matrix:\n");
  printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      scanf("%d",&arr[i][j]);
      }
  }  
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr[i][j]);
  }
 printf("\n");
}

