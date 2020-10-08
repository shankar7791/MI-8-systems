#include <stdio.h>

int
main(){
    int arr1[25], i,j,n, t, *ptr;  
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element = %d : ",i);
	  scanf("%d",arr1+i);
	  }
      ptr = &arr1;

      for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
    printf("Sorted Array = ");
    for (i = 0; i < n; i++) 
        printf("%d ", arr1[i]); 
        printf("\n");
    return 0;
}