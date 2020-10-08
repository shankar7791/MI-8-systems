#include <stdio.h>
#define FUNCTIONS_H_
int database()
{
    int i,n;
    struct student stuarr[n];
    printf("\n\tName\tRollNo\tMarks\t\n");
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%.2f\t\n", stuarr[i].name, stuarr[i].rollno, stuarr[i].marks);
}