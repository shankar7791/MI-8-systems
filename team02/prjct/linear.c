#include <stdio.h>
#define max_size 5
void linear_search(int array[],int element)

{
  int i;
  for(i=0;i<max_size;i++)
  {
    if(array[i]==element)
    {
      printf("linear search:%d is found at array: %d.\n",element,i+1);
      break;
    }
  }
  if(i==max_size)
  printf("search element :%d :not found\n",element);

}
