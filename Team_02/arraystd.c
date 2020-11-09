#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct student;
{
    char Name[20];
    int Rollno;
    int id;
};
 main()
{
     int i;

    struct student std[3];
    printf("Enter details of student %d:");

    for (i = 0; i < 3; i++)
    {
        printf("Enter %d student information:", i + 1);
        printf("Enter Name:");
        scanf("%s",&std[i].Name);
        printf("Enter Rollno:");
        scanf("%d",&std[i].Rollno );
        printf("Enter id:");
        scanf("%f",&std[i].id );
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent Information List:\n");
        printf("\nStudent Name:%s", std[i].Name);
        printf("\nStudent Rollno:%d\n", std[i].Rollno);
        printf("\nStudent id:%f\n", std[i].id);
        printf("\n\n");
    }
    return 0;
}
