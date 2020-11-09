#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[15];
    int dd, mm, yy;
    char class[5];
    char add[30];
    int rollno;
};
int main()
{
    int i, n;
    struct student st[100];
    printf("Enter How Many Records you want of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter %d student information:", i + 1);
        printf("\nEnter Name:");
        gets(st[i].name);
        gets(st[i].name);
        printf("\nEnter Date (formate: dd/mm/yy):");
        scanf("%d%d%d", &st[i].dd, &st[i].mm, &st[i].yy);
        printf("\nEnter class:");
        scanf("%s", st[i].class);
        printf("\nEnter Address:");
        gets(st[i].add);
        gets(st[i].add);
        printf("\nEnter Rollno:");
        scanf("%d", &st[i].rollno);
        printf("\n");
    }
    printf("\nStudent Information List:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nName:");
        printf("%s", st[i].name);
        printf("\nDate (formate: dd/mm/yy):");
        printf("%d/%d/%d", st[i].dd, st[i].mm, st[i].yy);
        printf("\nclass:");
        printf("%s", st[i].class);
        printf("\nAddress:");
        printf("%s", st[i].add);
        printf("\nRollno:");
        printf("%d", st[i].rollno);
        printf("\n\n");
    }
    return 0;
}