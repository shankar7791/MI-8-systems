include<stdio.h>
#include<stdlib.h>
typedef struct stud
{
  char name[20];
  int age;
  int height;
  struct stud *next;
}student,*point;
int main()
{
  int n,i;
  point a,temp;
  printf("enter the number of students\n");
  scanf("%d",&n);
  a=NULL;
  for(i=0;i<n;i++)
    {
      printf("student %d:\n",i+1);
      temp=(point)malloc(sizeof(student));
      temp->next=NULL;
      printf("enter name ");
      scanf("%s",temp->name);
      printf("enter age ");
      scanf("%d",&temp->age);
      printf("enter height ");
      scanf("%d",&temp->height);
      temp->next=a;
      a=temp;
    }


  printf("now i print the information about students \n");
  while(a!=NULL)
    {
      printf("student %d:\n",i+1);
      i--;
      printf("name: %s\n age: %d\n height: %d\n",a->name,a->age,a->height);
      a=a->next;
    }


  return 0;
}                                 
