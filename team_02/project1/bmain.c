#include <stdio.h>
#include <stdlib.h>
extern void bubblesort(int*,int);
extern void printarray(int*,int);
extern void insertionsort(int*,int);
extern void selectionsort(int*,int);
extern void linearsearch(int*,int,int);
extern void binarysearch(int*,int,int,int);
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


       switch(choice)
       {
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
  
   return 0;
  }

    printf("enter number to search:");
    scanf("%d",&num);
    printf("select option for search.\n");
    printf("1.linear search:\n ");
    printf("2.binarysearch:\n");
    printf("enter option:");
    scanf("%d",&option);
       
       switch(option)
       {
              case 1:binarysearch(arr,l,r,x);
                     int result=binarysearch(arr,0,n,num);
                     if(result == -1)
                     {
                            printf("element is not present");

                     }
                     else
                     {
                            printf("element is found at %d position",result);
                     }
                     break ;
              case 2:linearsearch(arr,n,x);
                     int result1=linearsearch(arr,n,x);
                     if(result==-1)
                     {
                            printf("element is not present.\n");
                     } 
                     else
                     {
                            printf("element is present at index %d",result1);
                     }
                      break ;
            return 0;

       } 


