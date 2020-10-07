#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define newnode (struct node *)malloc(sizeof(struct node))

void help();
void append();
void display();
void del();
int checkdate(int, int, int);
void update();
void search();
int length();

struct node //Define Struct
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
	char cmd[50];
	int c, pos, no1, i;
	char inst;
	help(); //Give choice to user
	while (1)
	{
		printf("\n[COMMAND PROMPT]$");
		fgets(cmd, 50, stdin);
		c = sscanf(cmd, "%c", &inst); //Accept User Choice
		switch (inst)
		{
		case 'a':
		case 'A':
			append(); //Add function call
			break;
		case 'P':
		case 'p':
			display(); //Display function call
			break;

		case 'e':
			exit(0); //Exit function call

		case 'd':
		case 'D':
			del(); //Delete function call
			break;

		case 'u':
		case 'U':
			update(); //Update function call
			break;

		case 's':
		case 'S':
			search(); //Search function call
			break;
		case 'h':
		case 'H':
			help(); //help function call
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
	int i, m, x;
	char n[10], dd[10], mm[10], yy[10];

	printf("Enter How Many Records you want of students: ");
	fgets(n, 10, stdin);
	x = atoi(n); //convert string to integer
	printf("%d", x);

	for (i = 0; i < x; i++)
	{
		fflush(stdin);
		t = newnode; //Alocated memory for link list node
		t->rollno = i + 1;
		printf("Enter student information Roll Number %d:", i + 1);
		printf("\nEnter Name:");
		fgets(t->name, 80, stdin);
		do
		{
			printf("\nFor BirthDate:");
			printf("\nEnter Day:");
			fgets(dd, 10, stdin);
			printf("\nEnter Month:");
			fgets(mm, 10, stdin);
			printf("\nEnter Year:");
			fgets(yy, 10, stdin);
			t->dd = atoi(dd);
			t->mm = atoi(mm);
			t->yy = atoi(yy);
			m = checkdate(t->dd, t->mm, t->yy);
		} while (m);

		printf("\nEnter class:");
		fgets(t->class, 5, stdin);
		printf("\nEnter Address:");
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

void del()
{
	int i, pos = 0, x, cnt = 0, flag = 0;
	struct node *t = head, *s = head;
	printf("\nEnter Roll number to delete:");
	scanf("%d", &x);
	if (head == NULL)
		printf("\nAppend First\n");
	else
	{
		while (t != NULL)
		{
			pos=pos+1;
			if (t->rollno == x)
			{
				flag = 1;
				if (pos == 1)
				{
					t = head;
					head = t->next;
					free(t);
					printf("\nDELETED\n");
				}
				else
				{
					for (i = 0; i < pos - 2; i++, s = s->next)
						;
					

					t = s->next;
					s->next = s->next->next;
					free(t);
					printf("\nDELETED\n");
					
				}
			}
			t = t->next;
		}
		if (flag == 0)
		{
			printf("\nInvalid Roll Number\n");
		}

		
	}
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
			printf("BirthDate (formate: dd/mm/yy):");
			printf("%d/%d/%d", s->dd, s->mm, s->yy);
			printf("\nClass:");
			printf("%s", s->class);
			printf("Address:");
			printf("%s", s->add);
			printf("\n");

			s = s->next;
		}
	}
}

int checkdate(int dd, int mm, int yy)
{
	if (dd > 0 && dd < 32 && mm > 0 && mm < 13 && yy > 1990 && yy < 2020)
	{

		return 0; //check date in formate
	}
	else
	{
		printf("\nInvalide Date !\n");
		return 1;
	}
}

void update()
{
	struct node *s = head;
	int i, x, m, flag = 0;
	char ch;

	printf("\nEnter Roll Number to update student data:");
	scanf("%d", &x);
	//for (; s != NULL; s = s->next)
	while (s != NULL)
	{
		if (s->rollno == x)
		{
			flag = 1;
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
			printf("\nUPDATED\n");
		}
		s = s->next;
	}
	if (flag == 0)
	{
		printf("\nInvalid Roll Number\n");
	}
}

void search()
{
	struct node *s = head;
	int x, flag = 0;

	printf("\nEnter Roll Number to Search student data:");
	scanf("%d", &x);
	//for (; s != NULL; s = s->next)
	while (s != NULL)
	{
		if (s->rollno == x)
		{
			flag = 1;
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
	if (flag == 0)
	{
		printf("\nInvalid Roll Number\n");
	}
}

int length()
{
	struct node *s;
	int tcnt;
	if (head == NULL)
		return 0;
	for (s = head; s != NULL; s = s->next)
		tcnt++;
	return tcnt;
}
void help()
{
	printf("\nCMD OPERATION \na   Add\nd   Delete\np   Print\nu   Update\ns   Search\ne   Exit");
}
