#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
  char Name[35];
  int Roll;
  int Marks;
  struct node *next;
};

int main()
{
  int i, n, ch, ps, x, k;
  k = 0;

  struct node *h, *t, *t1, *w, *q;
  h = NULL;

  while (1)
  {

    printf("\n 1.display \n2:add\n 3.delete\n 4.update\n 5.exit\n");
    printf("\n Enter what you want to do:");
    scanf("%d", &ch);
    switch (ch)

    {

    case 1:

      if (h == NULL)
      {
        printf("No records are available");
      }
      w = h;
      while (w != NULL)
      {
        printf("\nRoll no of a student:%d \nName of a student:%s \nMarks of a student:%d\n",
               w->Roll, w->Name, w->Marks);
        w = w->next;
      }

      break;

    case 2:
      printf("\n Enter the new record:");
      if (h == NULL)
      {
        h = t = (struct node *)malloc(sizeof(struct node));
        printf("\nRoll no of a student:\t");
        scanf("%d", &t->Roll);
        printf("\nName of a student:\t");
        scanf("%s", &t->Name);
        printf("\nMarks of a student:\t");
        scanf("%d", &t->Marks);
        t->next = NULL;
        break;
      }
      else
      {
        t1 = (struct node *)malloc(sizeof(struct node));

        printf("\nRoll no of a student:\t");
        scanf("%d", &t1->Roll);
        printf("\nName of a student:\t");
        scanf("%s", &t1->Name);
        printf("\nMarks of a student:\t");
        scanf("%d", &t1->Marks);
        t1->next = t->next;
        t->next = t1;
        t = t1;
      }

      break;

    case 3:
      printf("Enter roll no. of student whose record is to be deleted:\n");
      scanf("%d", &ps);
      t = h;
      while (t->Roll != ps - 1)
      {
        t = t->next;
      }
      t1 = t->next;
      t->next = t1->next;
      free(t1);
      break;

    case 4:
      printf("Enter the roll number whose data you want to update:\n");
      scanf("%d", &ps);
      t = h;
      while (t->Roll != ps)
      {
        t = t->next;
      }
      printf("\nThe New Rollno.of a student:\t");
      scanf("%d", &t->Roll);
      printf("\nThe New Name of a student:\t");
      scanf("%s", &t->Name);
      printf("\nThe New Marks of a student:\t");
      scanf("%d", &t->Marks);
      break;

    case 5:

      exit(0);

      break;
    }
  }
}
