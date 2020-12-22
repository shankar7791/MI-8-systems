#include <iostream>
#include<string.h>
using namespace std;

struct Node
struct Node 
 {
   int id;
   char name;
   char name[50];
   struct Node *prev;
   struct Node *next;
};

struct Node* head = NULL;
void insert(int newdata, char word[100])
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
   newnode->id = newdata;
   newnode->name = newdata;
   newnode->id = stud.id;
   strcpy(newnode->name,stud.name);
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL)
    {
      cout<< ptr->id <<" ";   
      cout<< ptr->name <<" ";   
      ptr = ptr->next;
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
void display() 
{
   struct Node* ptr;
   ptr = head[key];
   while(ptr != NULL)
    {
      cout<< ptr->id <<" "<<endl;   
      cout<< ptr->name <<" "<<endl;   
      ptr = ptr->next;
   }
}

// void display()
// {
//     int i;

//     for(i = 0; i < size; i++)
//     {
//         struct node *temp = chain[i];
//         printf("chain[%d]-->",i);
//         while(temp)
//         {
//             printf("%d -->",temp->data);
//             temp = temp->next;
//         }
//         printf("NULL\n");
//     }

int main()
 {
   insert(3,"sandesh");
   cout<<"The list is: ";
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