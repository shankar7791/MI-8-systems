#include <stdio.h>
#include <stdlib.h>
extern void bubblesort(int*,int);
extern void printarray(int*,int);
extern void insertionsort(int*,int);
extern int linear_search(int*,int,int,int);
extern int num_cmpr;
extern int num_swap;

int main()
{

  int array[]={9,2,22,4,5};
  int element,opt;
  printf("select method of sorting\n");
  printf("1.Bubblesort.\n");
  printf("2.Insertion sort");
  printf("enter option:")
  scanf("%d",&opt);
  while(1)
  {
  int size=sizeof(array)/sizeof(array[0]);
  testbubble();
  bubblesort(array,size);
  printf("bubble sorted elements:\n");
  printarray(array,size);
  {
    break;
  }
  while(2)
  {

  insertionsort(array,size);
  printf("insertion sorted elements:\n");
  printarray(array,size);
  

   default:
    printf("incorrect option.\n");
    break;
  }
}
  testlinear();
  printf("element to search: ");
  scanf("%d",&element);
  testlinear();
  linear_search(array,element);


  return 0;
}
