#include <stdio.h>
void enterdata(int firstmatrix[][10],int secondmatrix[][10],int rowfirst,int columnfirst,int rowsecond,int columnsecond)
{
  int i,j;
  printf("\nenter the elements of matrix 1:\n");
  for(i=0;i<rowfirst;++i)
  {
    for(j=0;j<columnfirst;++j)
    {
      printf("enter elements a %d%d: ",i+1,j+1);
      scanf("%d",&firstmatrix[i][j]);
    }
  }
  printf("\nenter the elements of matrix 2:\n");
  for(i=0;i<rowsecond;++i)
  {
    for(j=0;j<columnsecond;++j)
    {
      printf("enter elements b %d%d: ",i+1,j+1);
      scanf("%d",&secondmatrix[i][j]);
    }
  }
}
