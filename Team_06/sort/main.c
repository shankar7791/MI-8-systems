#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n);
void bubble_sort(int a[],int n);
void insertion_sort(int a[],int n);

//-----------------Main Function----------------------

int main()
{
   int n,choice,i;
   char ch[20];
   printf("Enter no. of elements u want to sort : ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
   }
   printf("Please select any option Given Below for Sorting : \n");

while(1)
   {

    printf("\n1. Bubble Sort\n2. Insertion Sort\n3. Display Array.\n4. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        bubble_sort(arr,n);
        break;

    case 2:
        insertion_sort(arr,n);
        break;

    case 3:
        display(arr,n);
        break;

    case 4:
        return 0;


    default:
        printf("\nPlease Select only 1 - 3option ----\n");
    }
}
return 0;
}

//-----------End of main function---------------------
