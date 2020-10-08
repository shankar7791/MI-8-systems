#include<stdio.h>

void linear(int arr[], int n)
{
    int i, num, flag=0;
    printf("\nEnter elenment to Search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]== num)
        {
            flag = 1;
            printf("Element found at %d position\n",i+1);
            break;
        }
    }

    if(flag == 0)
    printf("Element Not found\n");
}

int 
main(){ 
    int arr[100] ; 
    int n , i ;
    printf("How many Element you want:\n"); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    linear(arr, n);  
    return 0; 
} 
