#include<stdio.h>
extern  int binarySearch(int *,int , int, int);
extern void bubbleSort(int *, int);
extern void printArray(int *, int);
void testbs()
{
    int arr[]={50, 30, 60 ,10,80};
    int res;
    bubbleSort(arr,5);
    printArray(arr,5);
    res=binarySearch(arr,0,5,10);
    if(res==-1)
    {
        printf("Binary Search failed.\n");
    }else 
        printf("Binary Search succesed element found at %d.\n",res+1);
}