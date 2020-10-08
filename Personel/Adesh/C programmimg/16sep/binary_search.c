#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2;  
        if (arr[m] == x) 
            return m;  
        if (arr[m] < x) 
            l = m + 1;  
        else
            r = m - 1; 
    }  
    return -1; 
} 

int 
main(){ 
    int arr[100] ; 
    int n , i , m , num ;
    printf("How many Element you want:\n"); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter elenment to Search:");
    scanf("%d",&num);
    m = binarySearch(arr,0, n,num);  
    if(m== -1) printf("Element is Not Found\n");
    else printf("Element is Found\n");
    return 0; 
} 
