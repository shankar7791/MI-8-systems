typedef struct teacher
{
    char name[15], id[15], room[5], sub[10],pay[20];///room means class
    float salary;
 
    struct teacher *next;
 
} teach;

typedef struct student
{
    char name[15], id[15], sec[2], Class[5],pay[30];
    float fees;
 
    struct student *next;
} stu;
