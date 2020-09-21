#include<stdio.h>
int main()
{
  int i,j,matrix[2][3];
    for(i=0;i<=2;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("Enter the value for matrix[%d][%d]:",i,j);
          scanf("%d",&matrix[i][j]);
          }
    }

    printf("TEO DIMENSIONAL ARRAY ELEMENTS:\n");
      for(i=0;i<2;i++)
      {
        for(j=0;j<3;j++)
          {
            printf("%d",matrix[i][j]);
              if(j==2)
              {
              printf("\n");
              }
          }
      }
              return 0;
  }
