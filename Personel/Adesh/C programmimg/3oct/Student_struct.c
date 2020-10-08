#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[15];
    int age;
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
        st[i].rollno = i + 1;
        printf("Enter student information Roll Number %d:", i + 1);
        printf("\nEnter Name:");
        gets(st[i].name);
        gets(st[i].name);
        printf("\nEnter Age:");
        scanf("%d",&st[i].age);
        printf("\n");
    }
    printf("\nStudent Information List:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nRollno:");
        printf("%d", st[i].rollno);
        printf("\nName:");
        printf("%s", st[i].name);
        printf("\nAge:");
        printf("%d", st[i].age);
        printf("\n\n");
    }
    return 0;
}