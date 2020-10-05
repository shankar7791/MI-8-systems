#include <stdio.h>
void display(int mult[][10],int rowfirst,int columnsecond)
{
  int i,j;
  printf("\noutput matrix:\n");
  for(i=0;i<rowfirst;++i)
  {
    for(j=0;j<columnsecond;++j)
    {
      printf("%d\t",mult[i][j]);
      if(j == columnsecond-1)
      printf("\n\n");
    }
  }
}
