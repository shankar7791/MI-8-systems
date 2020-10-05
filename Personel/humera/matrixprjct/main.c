#include <stdio.h>
void enterdata(int firstmatrix[][10],int secondmatrix[][10],int rowfirst,int columnfirst,int rowsecond,int cloumnsecond);
void multiplymatrices(int firstmatrix[][10],int secondmatrix[][10],int mulresult[][10],int rowfirst,int rowsecond,int columnfirst,int columnsecond);
void display(int mult[][10],int rowfirst,int columnsecond);

int main()
{
  int firstmatrix[10][10], secondmatrix[10][10],mult[10][10],rowfirst,columnfirst,rowsecond,columnsecond,i,k,j;
  printf("enter rows and column for first matrix: ");
  scanf("%d %d",&rowfirst,&columnfirst);
  printf("enter rows and column for second matrix: ");
  scanf("%d %d",&rowsecond,&columnsecond);
  //if column of first matrix is not equal to
  //row of second matrix, asking user to enter the size of
  //matrix again.
  while(columnfirst != rowsecond)
  {
    printf("error!column of first matrix not equal to row of second.\n");
    printf("enter the rows and column of firts matrix:");
    scanf("%d %d",&rowfirst, &columnfirst);
    printf("enter the rows and column of second matrix:");
    scanf("%d %d",&rowsecond, &columnsecond);
  }
  enterdata(firstmatrix, secondmatrix, rowfirst,columnfirst,rowsecond,columnsecond);
  multiplymatrices(firstmatrix,secondmatrix,mult,rowfirst,columnfirst,rowsecond,columnsecond);
  display(mult,rowfirst,columnsecond);
  return 0;
}
