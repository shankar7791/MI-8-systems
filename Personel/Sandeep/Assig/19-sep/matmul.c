#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int fr[10][10], se[10][10], mul[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");
 
  for (  c = 0 ; c < m ; c++ )
    for ( d = 0 ; d < n ; d++ )
      scanf("%d", &fr[c][d]);
 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if ( n != p )
    printf("Matrices cant be multiple: check rows and column:.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for ( c = 0 ; c < p ; c++ )
      for ( d = 0 ; d < q ; d++ )
        scanf("%d", &se[c][d]);
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + fr[c][k]*se[k][d];
        }
 
        mul[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of two matrices:-\n");
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d\t", mul[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}