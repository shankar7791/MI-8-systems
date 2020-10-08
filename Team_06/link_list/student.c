#include <stdio.h>
#include <stdlib.h>

typedef struct stud
{
  char name[20];
  int age;
  int percentage;
  struct stud *next;
}
student, *point;

int
main()
{
  int n, i;
  point a, temp;

  printf(" enter the number of students u want\n ");
  scanf("%d", &n);
  a=NULL;
  for(i=0; i < n; i++)
    {

      printf(" student [%d]:\n ", i+1);
      printf(" ------------ \n");
      temp=(point)malloc(sizeof(student));
      temp -> next= NULL;

      printf(" enter name ");
      scanf("%s", temp -> name);


      printf(" enter age ");
      scanf("%d", &temp -> age);


      printf(" enter percentage ");
      scanf("%d", &temp -> percentage);
      printf(" ------------ \n");

      temp -> next= a;
      a= temp;
    }


  printf(" *** students information *** \n");
  while(a!= NULL)
    {
  
      printf(" ------------ \n");
      printf(" name: %s\n age: %d\n percentage: %f\n ", a -> name, a -> age, a -> percentage);

      a=a -> next;
    }


  return 0;
}
