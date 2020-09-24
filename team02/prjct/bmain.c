#include <stdio.h>
#include <stdlib.h>
extern void bubblesort(int*,int);
extern void printarray(int*,int);
extern void insertionsort(int*,int);
extern void parray(int*,int);
extern void linear_search(int*,int);
int main()
{
  int array[]={9,2,22,4,5};
  int element;
  int size=sizeof(array)/sizeof(array[0]);
  bubblesort(array,size);
  printf("bubble sorted elements:\n");
  printarray(array,size);

  insertionsort(array,size);
  printf("insertion sorted elements:\n");
  parray(array,size);
  printf("element to search: ");
  scanf("%d",&element);
  linear_search(array,element);
  

  return 0;
}
