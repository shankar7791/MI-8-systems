#include <stdio.h>
#include <string.h>


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

void display()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = head[i];
        printf("head[key]-->",i);
        while(temp)
        {
            printf("%d -->",temp->id);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int ch, num;

    //init array of list to NULL
    init();
    while(1) {

        printf("\n\n---- Hash Table with List(SLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Search\n5.Exit\n\n");
        printf("\nEnter your choice(1-4) : ");
        scanf("%d", &ch);

        switch(ch) {

    	    case 1 : printf("\nEnter The Data to inserts : ");
                     scanf("%d",&num);
                     insert(num); 
		     break;
            case 2 : display();
	             break;
            case 3 : printf("\nEnter The Data to Delete : ");
                     scanf("%d",&num);
                     delete(num); 
		     break;
            case 4 : printf("\nEnter The Data for search : ");
                     scanf("%d",&num);
		     search(num);
	             break;
	    default : exit(0);
                      break;
        }
    }
    return 0;
}

