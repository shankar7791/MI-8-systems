#include <stdio.h>
int 
main()
{
   int arr1[25], i,n, *ip;  
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element = %d : ",i);
	  scanf("%d",arr1+i);
	  }
      ip = &arr1;
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf("element - %d : %d \n",i,*ip+i);
	  }
	   return 0;
}