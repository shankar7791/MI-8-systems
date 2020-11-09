/* c program to calculate the sum of the elements of each row
*and column*/
#include <stdio.h>
int addrow(int array[10][10],int k,int c);
int addrow(int array[10][10],int k,int r);
void main()
{
  int arr[10][10];
  int i,j,row,col,rowsum,colsum,sumall=0;
  printf("enter the order of the matrix\n");
  scanf("%d %d",&row,&col);
  printf("enter the elements of the matrix \n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("input matrix is \n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%3d",arr[i][j]);
    }
    printf("\n");
  }
  /*computing row sum */
  for(i=0;i<row;i++)
  {
    rowsum=addrow(arr,i,col);
    printf("sum of row %d=%d\n",i+1,rowsum);
  }
  /*computing col sum*/
  for(j=0;j<col;j++)
  {
    colsum=addcol(arr,j,row);
    printf("sum of column %d =%d\n",j+1,colsum);
  }
  /*computing all elements*/
  for(j=0;j<row;j++)
  {
    sumall=sumall+addrow(arr,j,col);
  }
  printf("sum of all elements of matrix= %d\n",sumall);
}
/*function to add each row*/
int addrow(int array1[10][10],int k,int c)
{
  int rsum=0,i;
  for(i=0;i<c;i++)
  {
    rsum=rsum+array1[k][i];
  }
  return(rsum);
}
/*funtion to add each column*/
int addcol(int array1[10][10],int k,int r)
{
  int csum=0,j;
  for(j=0;j<r;j++)
  {
    csum=csum+array1[j][k];
  }
  return(csum);
}
