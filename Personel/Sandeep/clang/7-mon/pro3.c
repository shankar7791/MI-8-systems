#include<stdio.h>
 
int main()
{
  int i, num, Sum = 0;
 
  printf("\n Please Enter the Maximum Number : ");
  scanf("%d", &num);
  
  printf("\n Odd Numbers between 0 and %d are : ", num);
  for(i = 1; i <= num; i++)
  {
  	if ( i%2 != 0 ) 
  	{
  		printf("%d  ", i);
        Sum = Sum + i;
  	}
  }
  printf("\nThe Sum of Odd Numbers  = %d", Sum);

  return 0;
}