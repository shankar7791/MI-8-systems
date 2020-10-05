/* cprogram to demonstrate example of nested structure*/
#include <stdio.h>
struct student{
      char name[30];
      int rollno;
      struct dateofbirth{
        int dd;
        int mm;
        int yy;
      }DOB;/*created structure variable DOB */
};
int main()
{
  struct student std;
  printf("enter name : ");   gets(std.name);
  printf("enter roll number: "); scanf("%d",&std.rollno);
  printf("enter date of birth [DD MM YY]format: ");
  scanf("%d%d%d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);
  printf("\n Name :%s \n Rollno:%d\n dateofbirth:%02d/%02d/%02d\n",std.name,std.rollno,std.DOB.dd,std.DOB.mm,std.DOB.yy);
  return 0;
}
