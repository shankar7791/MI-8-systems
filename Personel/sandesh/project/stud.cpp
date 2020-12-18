#include <iostream>
using namespace std;

struct Node
 {
   int id;
   char name;
   struct Node *prev;
   struct Node *next;
};

struct Node* head = NULL;
void insert(int newdata, char word[100])
 {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->id = newdata;
   newnode->name = newdata;
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
   }
}

int main()
 {
   insert(3,"sandesh");
   cout<<"The list is: ";
   display();
   return 0;
}