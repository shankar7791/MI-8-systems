#include<stdio.h>
void main()
{
  int num;
  printf("Please enter the the age of the Candidate \n");
  scanf("%d",&num);
  if(num>18)
  printf("The candidate can vote  please vote \n");
  else
  printf("The candidate can not vote please try next time \n");
}
