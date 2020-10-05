#include <stdio.h>

struct student
{
	char name [30];
	int  marks[ 5];
	int  total;
	float perc;
};

int main()
{
	struct student std;
	int i;
	
	printf("Enter name: ");
	gets(std.name);

	printf("Enter marks:\n");
	std.total=0;
	for(i=0;i< 5;i++)
    {
		printf("Marks in subject %d ?: ",i+1);
		scanf("%d",&std.marks[i]);
		std.total+=std.marks[i];
	}
	std.perc=(float)((float)std.total/(float)500)*100;

	printf("\nName: %s \nTotal: %d \nPercentage: %.2f",std.name,std.total,std.perc);
	
	return 0;
}