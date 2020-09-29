#include<stdio.h>
extern void bubblesort(int*,int);
extern void printarray(int*,int);
extern void insertionsort(int*,int);
extern void linear_search(int*,int,int,int);
extern void testlinear();
extern void testbubble();
extern int num_cmpr;
void testlinear()
{
  int arr[]={9,2,22,4,5};
  int r,r1;
  r1=linear_search(arr,0,5,100);
  int s,i;

  for(i=0;i<5-1;i++)
  {
    if(arr[i]<=arr[i+1])
    ;
    else
    insertionsort(arr,5);
  }
  r=linear_search(arr,0,5,10);
  r1=linear_search(arr,0,5,100);
  if(r == -1&& r1!=-1)
  {
    printf("In test case linear search is failed.\n");
  }
  else
    printf("in test case linear search is succesed\n");
}
void testbubble()
{
  int arr[]={5,3,6,10,18};
  int i,flag=0;
  bubblesort(arr,5);
  for(i=0;i<5-1;i++)
  {
    if(arr[i]<=arr[i+1])
    ;
    else
    flag=1;
  }
  if(flag!=1 && num_cmpr>0)
  {
    printf("in testcase bubble sort succesed.\n");

  }
  else
  {
    printf("in testcase bubblesort failed\n");
  }
}
