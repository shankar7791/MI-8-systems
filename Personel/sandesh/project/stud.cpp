#include <iostream>
#include<string.h>
using namespace std;

struct Node 
 {
   int id;
   char name[50];
   struct Node *prev;
   struct Node *next;
};

struct Node* head[9];
void init()
{
   for (int i = 0; i <= 9; i++)
      head[i] = NULL;
}
void insert(struct Node stud)
 {
   int key = stud.id % 9;

   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->id = stud.id;
   strcpy(newnode->name,stud.name);
   newnode->prev = NULL;
   newnode->next = NULL;


   
   if(head[key] == NULL)
   {
      head[key]= newnode;
      //newnode->next=
   }

       else
    {
        //add the node at the end of chain[key].
        struct Node *temp = head[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newnode->next = NULL;
        newnode->prev=temp;

    }
  
}
// void display() 
// {
//    struct Node* ptr;
//    ptr = head[key];
//    while(ptr != NULL)
//     {
//       cout<< ptr->id <<" "<<endl;   
//       cout<< ptr->name <<" "<<endl;   
//       ptr = ptr->next;
//    }
// }

void display()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

int main()
 {
   init();
   struct Node stud;
   cout <<"enter the id : ";
   cin >> stud.id;
   cout <<"enter the name : ";
   cin >> stud.name;
   
   insert(stud);
   cout<<"The list is: "<<endl<<endl;
   display();
   return 0;
}