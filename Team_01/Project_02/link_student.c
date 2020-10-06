#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define newnode (struct node *)malloc(sizeof(struct node))

void help();
void append();
void display();
struct node *del(int);
int checkdate(int, int, int);
void update();
void search();

struct node
{
	char name[80];
	int dd, mm, yy;
	char class[5];
	char add[80];
	int rollno;
	struct node *next;
} *head = NULL;

int main()
{
	char cmd;
	int c, pos, no1, i;
	char inst;
	help();
	while (1)
	{
		printf("\n[COMMAND PROMPT]$");
		scanf("%c",&cmd);
		switch (cmd)
		{
		case 'a':
		case 'A':
			append();
			break;
		case 'P':
		case 'p':
			display();
			break;

		case 'e':
			exit(0);

		case 'd':
		case 'D':
			printf("\nEnter Roll number to delete:");
			scanf("%d", &no1);
			del(no1);
			break;

		case 'u':
		case 'U':
			update();
			break;

		case 's':
		case 'S':
			search();
			break;
		case 'h':
		case 'H':
			help();
			break;
		default:
			help();
			break;
		}
		no1 = i = 0;
		fflush(stdin);
	}
	return 0;
}

void append()
{
	struct node *t, *s;
	int i, n, m;

	printf("Enter How Many Records you want of students: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		t = newnode;
		t->rollno = i + 1;
		printf("Enter student information Roll Number %d:", i + 1);
		printf("\nEnter Name:");
		fgets(t->name, 80, stdin);
		fgets(t->name, 80, stdin);

		do
		{
			printf("\nEnter BirthDate (formate: dd/mm/yy):");
			scanf("%d%d%d", &t->dd, &t->mm, &t->yy);
			m = checkdate(t->dd, t->mm, t->yy);
		} while (m);

		printf("\nEnter class:");
		scanf("%s", t->class);
		printf("\nEnter Address:");
		fgets(t->add, 80, stdin);
		fgets(t->add, 80, stdin);
		printf("\n");
		t->next = NULL;

		if (head == NULL)
		{
			head = t;
		}
		else
		{
			for (s = head; s->next != NULL; s = s->next)
				;
			s->next = t;
		}
	}
	printf("\nAPPENDED");
}

struct node *del(int pos)
{
	int i;
	struct node *t, *s = head;
	if (head == NULL)
		printf("\nAppend First\n");
	else
	{
		if (pos == 1)
		{
			t = head;
			head = t->next;
			free(t);
		}
		else
		{
			for (i = 0; i < pos - 2; i++, s = s->next)
				;

			t = s->next;
			s->next = s->next->next;
			free(t);
		}
	printf("\nDELETED\n");
	}
	
	return head;
}

void display()
{
	struct node *s = head;
	if (s == NULL)
		printf("\nPlease  Add First\n");
	else
	{
		while (s != NULL)
		{
			printf("\nRollno:");
			printf("%d", s->rollno);
			printf("\nName:");
			printf("%s", s->name);
			printf("\nBirthDate (formate: dd/mm/yy):");
			printf("%d/%d/%d", s->dd, s->mm, s->yy);
			printf("\nClass:");
			printf("%s", s->class);
			printf("\nAddress:");
			printf("%s", s->add);
			printf("\n");

			s = s->next;
		}
	}
}

int checkdate(int dd, int mm, int yy)
{
	if (dd > 0 && dd < 32 && mm > 0 && mm < 13 && yy > 2000 && yy < 2020)
	{

		return 0;
	}
	else
	{
		printf("\nInvalide Date !");
		return 1;
	}
}

void update()
{
	struct node *s = head;
	int i, x, m, flag=0;
	char ch;

	printf("\nEnter Roll Number to update student data:");
	scanf("%d", &x);
	//for (; s != NULL; s = s->next)
	while (s != NULL)
	{
		if (s->rollno == x)
		{	flag=1;
			printf("\nWhich data you want to update:");
			printf("\nr Roll Number\nn Name \nd BirthDate \nc Class\na Address\n");
			printf("Enter Choice:");
			scanf("%s", &ch);
			switch (ch)
			{
			case 'r':
			case 'R':
				printf("Enter Roll Number to update:");
				scanf("%d", &s->rollno);
				break;

			case 'n':
			case 'N':
				printf("Enter Name to update:");
				fgets(s->name, 80, stdin);
				fgets(s->name, 80, stdin);
				break;

			case 'd':
			case 'D':
				do
				{
					printf("\nEnter BirthDate (formate: dd/mm/yy):");
					scanf("%d%d%d", &s->dd, &s->mm, &s->yy);
					m = checkdate(s->dd, s->mm, s->yy);
				} while (m);
				break;

			case 'c':
			case 'C':
				printf("\nEnter class:");
				scanf("%s", s->class);
				break;

			case 'a':
			case 'A':
				printf("\nEnter Address:");
				fgets(s->add, 80, stdin);
				fgets(s->add, 80, stdin);
				break;
			}
		}
		s = s->next;
		printf("\nUPDATED\n");
	}
	if (flag==0)
	{
		printf("\nInvalid Roll Number\n");
	}
}

void search()
{
	struct node *s = head;
	int x, flag=0;
	

	printf("\nEnter Roll Number to Search student data:");
	scanf("%d", &x);
	//for (; s != NULL; s = s->next)
	while (s != NULL)
	{
		if (s->rollno == x)
		{	
			flag=1;
			printf("\nRollno:");
			printf("%d", s->rollno);
			printf("\nName:");
			printf("%s", s->name);
			printf("\nBirthDate (formate: dd/mm/yy):");
			printf("%d/%d/%d", s->dd, s->mm, s->yy);
			printf("\nClass:");
			printf("%s", s->class);
			printf("\nAddress:");
			printf("%s", s->add);
			printf("\n");		
				
		}
		s = s->next;
	}
	if (flag==0)
	{
		printf("\nInvalid Roll Number\n");
	}
}

void help()
{
	printf("\nCMD OPERATION \na   Add\nd   Delete\np   Print\nu   Update\ns   Search\ne   Exit");
}
