#include <stdio.h>
void multiplymatrices(int firstmatrix[][10],int secondmatrix[][10],int mult[][10],int rowfirst,int columnfirst,int rowsecond,int columnsecond)
{
  int i,j,k;
  //initializing elements of matrix mult to 0
  for(i=0;i<rowfirst;i++)
  {
    for(j=0;j<columnsecond;++j)
    {
      mult[i][j]=0;
    }
  }
  //multiplying and storing in array mult.
  for(i=0;i<rowfirst;++i)
  {
    for(j=0;j<columnsecond;++j)
    {
      for(k=0;k<columnfirst;++k)
      {
        mult[i][j]+=firstmatrix[i][k]*secondmatrix[k][j];
      }
    }
  }
}
