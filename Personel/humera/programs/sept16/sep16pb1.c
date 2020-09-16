/* c program for implementation of
*selection sort */
#include <stdio.h>
int main()
{
  int array[100],n,c,d,position,t;
  printf("enter the number of elements:\n");
  scanf("%d", &n);
  printf("enter the %d integers\n", n);
  for(c=0;c<n;c++)
  scanf("%d",&array[c]);
  for(c=0;c<(n-1);c++)
  //finding minimum elements (n-1) times
  {
    position = c;
    for(d=c+1;d<n;d++)
    {
      if(array[position]>array[d])
      position = d;
    }
    if(position != c)
    {
      t=array[c];
      array[c]=array[position];
      array[position]=t;
    }
  }
  printf("sorted list in ascending order:\n");
  for(c=0;c<n;c++)
  printf("%d\n",array[c]);
  return 0;
}
