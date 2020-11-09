#include <stdio.h>

int
main(){
    int arr1[25], i,j,n, sum = 0, *ptr;  
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element = %d : ",i);
	  scanf("%d",arr1+i);
	  }
      ptr=&arr1[0];
    for (i = 0; i < n; i++) 
    sum += *(ptr+i);
    printf("Sum of Array = %d\n", sum);
    return 0;
}