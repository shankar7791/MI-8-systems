#include <stdio.h>
#include <stdlib.h>
extern void bubblesort(int*,int);
extern void printarray(int*,int);
extern void insertionsort(int*,int);
extern void selectionsort(int*,int);
extern void linear_search(int*,int);
void main()
{
  int i,n,*arr,choice;
  printf("enter no. of elements:");
  scanf("%d",&n);
  printf("enter %d elements: ",n);
  arr=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("\n\tmenu\n--------------------");
  printf("\n1:Bubblesort");
  printf("\n2:insertionsort");
  printf("\n3.selectionsort");
  printf("\nenter your choice: ");
  scanf("%d",&choice);


     switch(choice){
       case 1:bubblesort(arr,n);
              printf("sorted array by bubblesort:\n");
              printarray(arr,n);
              break;
       case 2:insertionsort(arr,n);
              printf("sorted array by insertionsort:\n");
              printarray(arr,n);
              break;
       case 3:selectionsort(arr,n);
              printf("sorted array by selectionsort:\n");
              printarray(arr,n);
       break;
       default:exit(0);
     }

  }
