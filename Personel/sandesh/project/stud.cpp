#include <iostream>
#include <string.h>
using namespace std;

struct Node
{
    int id;
    char name[50];
    char add[50];
    long mobile;
    float per;     
    struct Node *prev;
    struct Node *next;
};

int key;

struct Node *head[9];
void init()
{
    for (int i = 0; i <= 9; i++)
        head[i] = NULL;
}

void insert(struct Node stud)
{
     key = stud.id % 9;

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->id = stud.id;
    strcpy(newnode->name, stud.name);
    strcpy(newnode->add, stud.add);
    newnode->mobile = stud.mobile;
    newnode->per = stud.per;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head[key] == NULL)
    {
        head[key] = newnode;
        //newnode->next=
    }

    else
    {
        //add the node at the end of chain[key].
        struct Node *temp = head[key];
        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = NULL;
        newnode->prev = temp;
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

    for (i = 0; i < 9; i++)
    {
        struct Node *temp = head[key];
        cout << "head[" << i <<"]<-->";
        while (temp)
        {
            cout << " " << temp->id << " " << temp->name << " " << temp->add << " " << temp->mobile << " " << temp->per << "<-->" << endl;
            temp = temp->next;

        }
        cout << "NULL" << endl;
    }
}

int main()
{
    init();
    struct Node stud;

    display();
    cout << endl << endl << "enter the student id : ";
    cin >> stud.id;

    cout << "enter the student name : ";
    cin >> stud.name;

    cout << "enter the student add : ";
    cin >> stud.add;

    cout << "enter the mobile number : ";
    cin >> stud.mobile;

    cout << "enter the student percentage : ";
    cin >> stud.per;

    insert(stud);
    cout << "The list is: " << endl << endl;
    display();
    return 0;
}
