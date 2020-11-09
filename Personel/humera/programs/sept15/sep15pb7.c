/* c program to accept an array of integers and delete the
*specified integer from the list
*/
#include <stdio.h>
void main()
{
  int vectorx[10];
  int i,n,pos,elements, found =0;

  printf("enter how many elements\n");
  scanf("%d", &n);
  printf("enter the elements\n");

  for(i=0;i<n;i++)
  {
    scanf("%d",&vectorx[i]);
  }
  printf("input array elements are\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",vectorx[i]);
  }
  printf("enter the elements to be deleted\n");
  scanf("%d",&elements);
  for(i=0;i<n;i++)
  {
    if(vectorx[i]==elements)
    {
      found = 1;
      pos =1;
      break;
    }
  }
  if(found == 1)
  {
    for(i=pos;i<n-1;i++)
    {
      vectorx[i]=vectorx[i+1];
    }
    printf("the resultant vector is \n");
    for(i=0;i<n-1;i++)
    {
      printf("%d\n",vectorx[i]);
    }
  }
  else
  printf("elements %d is not found in the vector\n",elements);
}
