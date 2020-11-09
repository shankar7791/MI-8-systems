/*c program to read and print student's record using structure*/
#include <stdio.h>
/*stucture declaration*/
struct student{
      char name[30];
      int studentid;
      float percentage;
};
int main()
{
  /* declare structure variable*/
  struct student emp;
  printf("\nEnter details:\n");
  printf("student Name ?: ");     gets(emp.name);
  printf("roll no ?:");        scanf("%d",&emp.studentid);
  printf("percentage ?:");     scanf("%f",&emp.percentage);
  /*print employee details*/
  printf("\n entered detail is:\n");
  printf("name:%s\n",emp.name);
  printf("roll no:%d\n",emp.studentid);
  printf("percentage:%f \n",emp.percentage);
  return 0;

}
