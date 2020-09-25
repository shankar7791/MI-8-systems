#include <stdio.h>

/*structure declaration*/
struct employee
{
	char name[30];
	int empId;
	float sal;
};

int main()
{
	/*declare and initialization of structure variable*/
	struct employee emp={"Mike",1120,76909.00f};
	
	printf("\n Name: %s"	,emp.name);
	printf("\n Id: %d"		,emp.empId);
	printf("\n Salary: %f\n",emp.sal);
	return 0;
}
