/* input age and check whether user is teenage or not*/

#include<stdio.h>

int
main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age>= 13 && age<=19)
	{
		printf("You are teenage");
	}
	else
	{
		printf("you are not teenage");
	}
}
	
	


