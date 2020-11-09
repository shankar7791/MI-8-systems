#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node
  {
     char name[29];
     int mark;
     int roll;
     struct node *next;
  };

  int main()
  {
    int i,n,ch,ps,x,k;
    k=0;


  struct node *h,*t,*t1,*w,*q;
  h=NULL;

  printf("\n/*DATABASE USING LINKED LISTS*/");


while(1)
 {
     
      printf("\n1.display\n2:add\n3.delete\n4.modification\n5.exit\n");
        printf("\nenter your choice=");
      scanf("%d",&ch);
      switch(ch)
     
{

case 1:    

  if(h==NULL)
   {
    printf("no records are available");
  }
  w=h;
  while(w!=NULL)
 {
    printf("\nroll no of a student:%d\nname of a student:%s\nmarks of a student:%d\n",
  w->roll,w->name,w->mark);
  w=w->next;
 }

break;

case 2:
   printf("\nenter the new record=\t");
   if(h==NULL)
 {
  h=t=(struct node *)malloc(sizeof(struct node));
  printf("\nRoll no of a student:\t");
  scanf("%d",&t->roll);
   printf("\nName of a student:\t");
    scanf("%s",&t->name);
    printf("\nMarks of a student:\t");
    scanf("%d",&t->mark);
   t->next=NULL;
break;
}
else
  {
    t1=(struct node *)malloc(sizeof(struct node));

    printf("\nRoll no of a student:\t");
    scanf("%d",&t1->roll);
    printf("\nName of a student:\t");
    scanf("%s",&t1->name);
    printf("\nMarks of a student:\t");
    scanf("%d",&t1->mark);
    t1->next=t->next;
    t->next=t1;
    t=t1;
                                                                                         
}


break;

case 3:
    printf("enter roll no. of student whos record is to be deleted=\n");
    scanf("%d",&ps);
    t=h;
 while(t->roll!=ps-1)
   {
     t=t->next;
    }
     t1=t->next;
     t->next=t1->next;
     free(t1);
 break;


case 4:
    printf("enter the roll number whose data you want to  modifiy\n");
   scanf("%d",&ps);
   t=h;
 while(t->roll!=ps)
   {
   t=t->next;
   }
  printf("\nThe New Rollno.of a student:\t");
  scanf("%d",&t->roll);
  printf("\nThe New Name of a student:\t");
  scanf("%s",&t->name);
  printf("\nThe New Marks of a student:\t");
  scanf("%d",&t->mark);
 break;
     

case 5:
           
 exit(0);
           
 break;


     
}

}

}


