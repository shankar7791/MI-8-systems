#include<stdio.h>
/*structure declaration*/
struct student{
      char name[30];
      int rollno;
      int class;
      float percentage;

};
int main()
{
  /*declare and initialisation of structure variable*/
  struct student std={"SAM",112,10,92.81f};
  printf("\n name: %s", std.name);
  printf("\n rollno: %d",std.rollno);
  printf("\n class:%d",std.class);
  printf("\n percentage:%f \n",std.percentage);
  return 0;
}
