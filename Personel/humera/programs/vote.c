#include <stdio.h>
void main()
{
int vote_age;
printf("enter the age of the candidate:");
scanf("%d",&vote_age);
if(vote_age<18)
{
printf("sorry, you are not eligible to caste your vote,agelimit:18.\n");
}
else
printf("congratulations you are eligible\n");
}

