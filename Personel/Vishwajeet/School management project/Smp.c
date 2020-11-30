#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct teacher
{
    char name[15], id[15], room[5], sub[10],pay[20];
    float salary;
 
    struct teacher *next;
 
} teach;

typedef struct student
{
    char name[15], id[15], sec[2], Class[5],pay[30];
    float fees;
 
    struct student *next;
} stu;

teach *headT = NULL;
teach *tempT = NULL;
teach *prevT = NULL;
 
stu *headS = NULL;
stu *tempS = NULL;
stu *prevS = NULL;
int i = 0, countT = 0, countS = 0;

void entryTeacher()
{
    int n;
    printf("How many Teachers data you want to enter:");
    scanf("%d", &n);
 
    for(i = 0; i < n; i++)
    {
        teach *newNode;
        printf("\nEnter data for #%d no Teacher\n",++countT);
        newNode = (teach*)malloc(sizeof(teach));
        printf("\tEnter Teacher Name:");
        scanf("%s", &newNode-> name);
        printf("\tEnter Teachers ID:");
        scanf("%s", &newNode-> id);
        printf("\tEnter Subject:");
        scanf("%s", &newNode-> sub);
        printf("\tEnter Room NO:");
        scanf("%s", &newNode-> room);
        printf("\tEnter salary:");
        scanf("%f", &newNode-> salary);
        printf("\tEnter Payment Status:");
        scanf("%s", &newNode-> pay);
        newNode-> next = NULL;
 
        if(headT == NULL)
        {
            headT = newNode;
        }
        else
        {
            tempT = headT;
            while(tempT-> next != NULL)
                tempT = tempT-> next;
            tempT-> next = newNode;
        }
        system("cls");
    }
}

void entryStudent()
{
    int n;
    system("cls");
    printf("How many Students data you want to enter:");
    scanf("%d", &n);
 
    for(i = 0; i < n; i++)
    {
        stu *newNode;
        printf("\nEnter data for #%d no Student\n",++countS);
        newNode = (stu*)malloc(sizeof(stu));
        printf("\tEnter Student Name:");
        scanf("%s", &newNode-> name);
        printf("\tEnter student ID:");
        scanf("%s", &newNode-> id);
        printf("\tEnter Section:");
        scanf("%s", &newNode-> sec);
        printf("\tEnter Class NO:");
        scanf("%s", &newNode-> Class);
        printf("\tEnter Fees:");
        scanf("%f", &newNode-> fees);
        printf("\tEnter Payment Status:");
        scanf("%s", &newNode-> pay);
 
        newNode-> next = NULL;
 
        if(headS == NULL)
        {
            headS = newNode;
        }
        else
        {
            tempS = headS;
            while(tempS-> next != NULL)
                tempS = tempS-> next;
            tempS-> next = newNode;
        }
        system("cls");
    }
}

void searchAT()
{
    teach *pre=NULL;
    teach *temp=headT;
 
    char src[20];
    system("cls");
    printf("Enter Teachers search value name, ID ,Subject or Room no:");
    scanf("%s",src);
    while(temp!=NULL && ((strcmp(temp->name,src)!=0)&&((strcmp(temp->room,src)!=0) && (strcmp(temp->id,src)!=0)&&(strcmp(temp->sub,src)!=0))))
    {
        pre=temp;
        temp=temp-> next;
    }
 
    if(temp==NULL)
    {
        printf("\nNot Found your value\n\n");
    }
 
    else
    {
        printf("\nSearch Teacher's information:\n");
        printf("\tTeacher Name: %s\n",temp-> name);
        printf("\tTeacher ID: %s\n",temp->id);
        printf("\tTeacher Subject: %s\n",temp->sub);
        printf("\tTeacher Room No: %s\n",temp->room);
        printf("\tTeacher Salary: %.2f\n",temp->salary);
        printf("\tTeacher Payment status: %s\n",temp->pay);
 
 
        printf("\n\tEnter 1 for delete or Enter 2 for Edit:");
        int d;
        scanf("%d",&d);
        if(2==d)
        {
            printf("\t\tEnter update Teacher Name:");
            scanf("%s", &temp-> name);
            printf("\t\tEnter update Teacher ID:");
            scanf("%s", &temp-> id);
            printf("\t\tEnter update Teacher Subject:");
            scanf("%s", &temp-> sub);
            printf("\t\tEnter update Teacher Room no:");
            scanf("%s", &temp-> room);
            printf("\t\tEnter update Teacher Salary:");
            scanf("%f", &temp-> salary);
            printf("\t\tEnter update Teacher Payment Status:");
            scanf("%s", &temp-> pay);
 
            printf("\nUpdate Successfully\n\n");
 
        }
        else if(d==1)
        {
            if(temp==headT)
            {
                headT=temp->next;
                printf("\nInformation of %s has deleted successfully \n\n",temp->name);
                free(temp);
                --countT;
            }
            else{
                pre->next=temp->next;
            printf("\nInformation of %s has deleted successfully \n\n",temp->name);
            free(temp);
            --countT;
            }
        }
 
    }
 
}
 
void searchAS()
{
    stu *pre=NULL;
    stu *temp=headS;
 
    char src[20];
    printf("Enter Students search value name, ID ,Subject or Class:");
    scanf("%s",src);
    while(temp!=NULL && ((strcmp(temp->name,src)!=0)&&((strcmp(temp->Class,src)!=0) && (strcmp(temp->id,src)!=0))))
    {
        pre=temp;
        temp=temp-> next;
    }
 
    if(temp==NULL)
    {
        printf("\nNot Found your value\n\n");
    }
 
    else
    {
        printf("\nSearch Student's information:\n");
        printf("\tStudent's Name: %s\n",temp-> name);
        printf("\tStudent's ID: %s\n",temp->id);
        printf("\tStudent's Section: %s\n",temp->sec);
        printf("\tStudent's Class: %s\n",temp->Class);
        printf("\tStudent's Fees: %.2f\n",temp->fees);
        printf("\tStudent's Payment status: %s\n",temp->pay);
 
 
        printf("\n\tEnter 1 for delete or Enter 2 for Edit:");
        int d;
        scanf("%d",&d);
        if(2==d)
        {
            printf("\t\tEnter update Student's Name:");
            scanf("%s", &temp-> name);
            printf("\t\tEnter update Student's ID:");
            scanf("%s", &temp-> id);
            printf("\t\tEnter update Student's Section:");
            scanf("%s", &temp-> sec);
            printf("\t\tEnter update Student's Class:");
            scanf("%s", &temp-> Class);
            printf("\t\tEnter update Student's Fees:");
            scanf("%f", &temp-> fees);
            printf("\tEnter update Student's Payment Status:");
            scanf("%s", &temp-> pay);
 
 
 
            printf("Update Successfully\n\n");
        }
        else if(d==1)
        {
            if(temp==headS)
            {
                headS=temp->next;
                printf("\nInformation of %s has deleted successfully \n\n",temp->name);
                free(temp);
                --countS;
            }
            else
            {
                pre->next=temp->next;
            printf("\nInformation of %s has deleted successfully \n\n",temp->name);
            free(temp);
            --countS;
            }
 
 
        }
 
    }
 
}

void printTeacher()
{
    system("cls");
    printf("\n\t\tDisplay Teachers Information\n");
    tempT = headT;
    printf("Total %d Teachers Data\n", countT);
    int c=1;
    while(tempT != NULL)
    {
        printf("Teacher SL NO:%d\n",c);
        printf("\tTeachers ID: %s\n", tempT-> id);
        printf("\tTeachers Name: %s\n", tempT-> name);
        printf("\tAssigned Subject: %s\n", tempT-> sub);
        printf("\tAssigned Room NO: %s\n", tempT-> room);
        printf("\tMonthly Salary: %.2f\n\n", tempT-> salary);
        c++;
        tempT=tempT->next;
    }
}

void printStudent()
{
    system("cls");
    printf("\n\t\tDisplay Students Information\n");
    tempS =headS;
    printf("Total %d Students Data\n",countS);
    int c =1;
    while(tempS!=NULL)
    {
        printf("Student SL NO: %d\n",++c);
        printf("\tStudent ID: %s\n",tempS->id);
        printf("\tStudent Name: %s\n",tempS->name);
        printf("\tStudent Section: %s\n",tempS->sec);
        printf("\tStudent Class: %s\n",tempS->Class);
        printf("\tStudent Fees: %.2f\n\n",tempS->fees);
        c++;
        tempS=tempS->next;
    }
 
}

void searchT()
{
    tempT = headT;
    char value[15];
    printf("Enter The Data You Want To search(Name Or ID Or Subject Or Room NO\n");
    printf("\tPlease Enter Your Required Data:");
    scanf("%s", &value);
 
    while(tempT-> next != NULL && ((strcmp(tempT-> name, value)) && (strcmp(tempT-> id, value)) && (strcmp(tempT-> sub, value)) && (strcmp(tempT-> room, value)) && (strcmp(tempT-> room, value)) ) != 0 )
        tempT = tempT-> next;
 
    if(tempT == NULL)
        printf("SORRY...! Data Not Found\n");
    else
    {
        printf("\nData Found Your Data Should Be below here\n");
        printf("\tTeachers ID: %s\n", tempT-> id);
        printf("\tTeachers Name: %s\n", tempT-> name);
        printf("\tAssigned Subject: %s\n", tempT-> sub);
        printf("\tAssigned Room NO: %s\n", tempT-> room);
        printf("\tMonthly Salary: %.2f\n\n", tempT-> salary);
 
 
    }
}

void searchS()
{
    tempS = headS;
    char value[15];
    printf("Enter The Data You Want To search(Name Or ID Or Section Or Class NO\n");
    printf("\tPlease Enter Your Required Data:");
    scanf("%s", &value);
 
    while(tempS-> next != NULL && ((strcmp(tempS-> name, value)) && (strcmp(tempS-> id, value)) && (strcmp(tempS-> sec, value)) && (strcmp(tempS-> Class, value)) != 0 ))
        tempS = tempS-> next;
 
    if(tempS == NULL)
        printf("SORRY...! Data Not Found\n");
    else
    {
        printf("\nData Found Your Data Should Be below here\n");
        printf("\tStudent ID: %s\n",tempS->id);
        printf("\tStudent Name: %s\n",tempS->name);
        printf("\tStudent Section: %s\n",tempS->sec);
        printf("\tStudent Class: %s\n",tempS->Class);
        printf("\tStudent Fees: %.2f\n\n",tempS->fees);
    }
 
}

void paymentCheckS()
{
    char pass[32],password[]= {"password"};
    stu *pre=NULL;
    stu *temp=headS;
 
    char src[20];
    system("cls");
    printf("Enter Students search value name, ID:");
    scanf("%s",&src);
    while(temp!=NULL && ((strcmp(temp->name,src)!=0) && (strcmp(temp->id,src)!=0)))
    {
        pre=temp;
        temp=temp-> next;
    }
 
    if(temp==NULL)
    {
        printf("\nNot Found your value\n\n");
    }
 
    else
    {
        printf("\nSearch Student's information:\n");
        printf("\tStudent's Name: %s\n",temp-> name);
        printf("\tStudent's ID: %s\n",temp->id);
        printf("\tStudent's Section: %s\n",temp->sec);
        printf("\tStudent's Class: %s\n",temp->Class);
        printf("\tStudent's Fees: %.2f\n",temp->fees);
        printf("\tStudent's Payment status: %s\n",temp->pay);
 
        int d;
        printf("\n\tPress 1 for Update\tPress 0 for Back\n\n");
        printf("\t\tSelect option :");scanf("%d",&d);
        if(d==1)
            {
            printf("\n\tEnter Password for Payment Update:");
 
        scanf("%s",&pass);
        if(strcmp(pass,password)==0)
        {
            printf("\tEnter update Student's Payment Status:");
            scanf("%s", &temp-> pay);
 
            printf("\nUpdate Successfully\n\n");
        }
        else
            printf("\n=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
            }

    }
 
}
void paymentCheckT()
{
    char pass[32],password[]= {"password"};
    teach *pre=NULL;
    teach *temp=headT;
 
    char src[20];
    system("cls");
    printf("Enter Students search value name, ID:");
    scanf("%s",&src);
    while(temp!=NULL && ((strcmp(temp->name,src)!=0) && (strcmp(temp->id,src)!=0)))
    {
        pre=temp;
        temp=temp-> next;
    }
 
    if(temp==NULL)
    {
        printf("\nNot Found your value\n\n");
    }
 
    else
    {
        printf("\nSearch Teacher's information:\n");
        printf("\tTeacher Name: %s\n",temp-> name);
        printf("\tTeacher ID: %s\n",temp->id);
        printf("\tTeacher Subject: %s\n",temp->sub);
        printf("\tTeacher Room No: %s\n",temp->room);
        printf("\tTeacher Salary: %.2f\n",temp->salary);
        printf("\tTeacher Payment status: %s\n",temp->pay);
        int d;
        printf("\n\tPress 1 for Update\tPress 0 for Back\n\n");
        printf("\t\tSelect option :");scanf("%d",&d);
        if(d==1)
            {
                printf("\n\tEnter Password for Payment Update:\n");
 
        scanf("%s",&pass);
        if(strcmp(pass,password)==0)
        {
            printf("\tEnter update Student's Payment Status:");
            scanf("%s", &temp-> pay);
 
 
 
            printf("\nUpdate Successfully\n\n");
        }
        else
            printf("\n=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
 
    }
            }
 
 
 
}
int call()
{
    int o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16,o17,o18,o19,o20;
    char pass[32],password[]= {"password"};
    for(;;)
    {
        printf("Choose any of the below:\n");
        printf("______________________________________________________________________________________________________\n\n");
        printf("\tPress 1 For Admin\tPress 2 For Teacher\n\tPress 3 For Student\tPress 0 To Exit\n");
 
        printf("______________________________________________________________________________________________________\n\n");
        printf("\n\t\tSelect option: ");
 
        scanf("%d",&o1);
        printf("\n");
 
        if(o1==1)
        {
            printf("______________________________________________________________________________________________________\n\n");
 
            printf("\t\t\tEnter Password : ");
            scanf("%s",&pass);
            printf("\n");
            if(strcmp(pass,password)==0)
            {

                system("cls");
                printf("\t\t\t\tAdministrator Portal\n\t\t==================================================\n\n");
                for(;;)
                {
                    printf("\tPress 1 For Teacher\t\tPress 2 For Student\n\tPress 3 For Displaying Data List\n\tPress 4 For Home\tPress 0 TO Exit\n ");
                    printf("______________________________________________________________________________________________________\n\n");
                    printf("\n\t\tSelect option: ");
 
                    scanf("%d",&o2);
                    printf("\n");
 
                    if(o2==1)
                    {
                        system("cls");
                        printf("\tPress 1 For Teachers Data Entry \tPress 2 For Searching Teachers Data\n\tPress 3 For Payment Status\tTo Return back Press 4\n\tPress 5 for Home\tTo Exit press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o3);
                        printf("\n");
 
                        if(o3==1)
                            entryTeacher();
                            else if (o3==5)call();
                        else if(o3==2)
                            searchAT();
                        else if(o3==3)
                        {
                            system("cls");
                            printf("\n\tPress 1 For Students Payment Status\tPress 2 For Teachers Payment Status\tTo return Press 0\n\n");
                            printf("______________________________________________________________________________________________________\n\n");
                            printf("\n\t\tSelect option: ");
 
                            scanf("%d",&o6);
                            printf("\n");
                            if(o6==1)
                                paymentCheckS();
                            else if(o6==2)
                                paymentCheckT();
                            else
                                continue;
                        }
                        else if(o3==4)
                            continue;
                        else if(o3==0)
                            return 0;
 
 
                    }
                    else if(o2==4)call();
                    else if(o2==2)
                    {
                        system("cls");
                        printf("\tPress 1 For Students Data Entry\tPress 2 For Searching Students Data\n\tTo Return Press 3\tTo Home for 4\tTo Exit Press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o3);
                        printf("\n");
                        if(o3==1)
                            entryStudent();
                        else if(o3==2)searchAS();
                        else if(o3==4)call();
                        else if(o3==3)
                            continue;
                        else if(o3==0)
                            return 0;
 
                    }
                    else if(o2==3)
                    {
                        system("cls");
                        printf("\n\tPress 1 TO Display Teachers Data List\tPress 2 TO Display Students Data List\n\tTo Return press 3\tPress 4 for Home\tExit for press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o4);
                        printf("\n");
                        if(o4==1)
                            printTeacher();
                        else if(o4==2)
                            printStudent();
                            else if(o4==4)call();
                        else if(o4==3)
                            continue;
                        else
                            return 0;
 
                    }
                    else
                        return 0;
 
                }
            }
            else
            {
                system("cls");
                printf("\n=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
                printf("\n\tPress 1 For Trying again\tTo Exit Press 0\tTo Home for 2\n\n");
                printf("______________________________________________________________________________________________________\n\n");
 
                printf("\t\tSelect Option:");
                scanf("%d",&o5);
                printf("\n");
                if(o5==1)
                    continue;
                    else if(o5==2) call();
                else
                    return 0;
            }
        }

        if(o1==2)
        {
            printf("______________________________________________________________________________________________________\n\n");
 
            printf("\t\t\tEnter Password : ");
            scanf("%s",&pass);
            printf("\n");
            if(strcmp(pass,password)==0)
 
 
            {
                system("cls");
                printf("\t\t\t\tTeachers Portal\n\t\t==================================================\n\n");
                for(;;)
                {
                    printf("\tFor teacher please Press 1\t For Students Press 2\n\tPress 3 For Displaying List\tTo Home for 4 \tTo Exit Press 0\n ");
                    printf("______________________________________________________________________________________________________\n\n");
                    printf("\n\t\tSelect option: ");
 
                    scanf("%d",&o7);
                    printf("\n");

                    if(o7==4)call();
                    else if(o7==1)
                    {
                        printf("\tPress 1 for Searching Teachers Information\tFor Payment check press 2\n\tTo Return Home Press 3\tTo Exit Press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o8);
                        printf("\n");
                        if(o8==1)
                            searchT();
                        else if(o8==2)
                        {
                            system("cls");
                            printf("\n\tFor Teachers Payment check Press 1\tTo Return Back Press 0\n\n");
                            printf("______________________________________________________________________________________________________\n\n");
                            printf("\n\t\tSelect option: ");
 
                            scanf("%d",&o6);
                            printf("\n");
                            if(o6==1)
                                paymentCheckT();
                            else
                                continue;
                        }
                        else if(o8==3)
                            call();
                        else if(o8==0)
                            return 0;
 
 
                    }
                    else if(o7==2)
                    {
                        system("cls");
                        printf("\tPress 1 for Students Data Entry\t To Search Students Press 2\n\tFor Students Payment Status Press 3\tTo Return back Press 4\n\tTo Home for 5\tTO Exit Press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o9);
                        printf("\n");
                        if(o9==1)
                            entryStudent();
                        else if(o9==5)call();
                        else if(o9==2)searchAS();
                        else if(o9==3)
                            paymentCheckS();
                        else if(o9==4)
                            continue;
                        else if(o9==0)
                            return 0;
 
                    }
                    else if(o7==3)
                    {
                        system("cls");
                        printf("\n\t To see Teachers List Press 1\tTo see Students List Press 2\n\tTo Return back Press 3\tTo Exit Press 0\n");
                        printf("______________________________________________________________________________________________________\n\n");
                        printf("\n\t\tSelect option: ");
 
                        scanf("%d",&o10);
                        printf("\n");
                        if(o10==1)
                            printTeacher();
                        else if(o10==2)
                            printStudent();
                        else if(o10==3)
                            continue;
                        else
                            return 0;
 
                    }
                    else
                        return 0;
 
                }
            }
            else
            {
                system("cls");
                printf("\n=>=>=>=>\tYour Password was incorrect\t<=<=<=<=\n");
                printf("\nTo Try Again Press 1\t To Exit Press 0\t To Home for 2\n\n");
                printf("______________________________________________________________________________________________________\n\n");
                printf("\n\t\tSelect option: ");
 
                scanf("%d",&o11);
                printf("\n");
                if(o11==1)
                    continue;
                    else if(o11==2)call();
                else
                    return 0;
            }
        }

        if(o1==3)
        {
            system("cls");
            printf("\t\t\t\tStudents Portal\n\t\t==================================================\n\n");
            for(;;)
            {
                printf("\tFor teacher please press 1\t For Students Press 2\n\tTO Display List Press 3\tTo Home for 4\tTO Exit Press 0\n ");
                printf("______________________________________________________________________________________________________\n\n");
                printf("\n\t\tSelect option: ");
 
                scanf("%d",&o7);
                printf("\n");

                if(o7==4)call();
                else if(o7==1)
                {
                    system("cls");
                    printf("\tTO Search Teachers Information press 1\tTo return back Press 2\tTo Exit Press 0\n");
                    printf("______________________________________________________________________________________________________\n\n");
                    printf("\n\t\tSelect option: ");
 
                    scanf("%d",&o8);
                    printf("\n");
                    if(o8==1)
                        searchT();
                    else if(o8==2)
                        continue;
                    else if(o8==0)
                        return 0;
 
 
                }
                else if(o7==2)
                {
                    system("cls");
                    printf("\tTO Search Students Information Press 1\tFor Payment Status Press 2\n\tTo Return back Press 3\tTo Home for 4\tTo Exit Press 0\n");
                    printf("______________________________________________________________________________________________________\n\n");
                    printf("\n\t\tSelect option: ");
 
                    scanf("%d",&o9);
                    printf("\n");
                    if(o9==1)
                        searchS();
                        else if(o9==4)call();
                    else if(o9==2)
                        paymentCheckS();
                    else if(o9==3)
                        continue;
                    else if(o9==0)
                        return 0;
 
                }
                else if(o7==3)
                {
                    system("cls");
                    printf("\n\tTo See Teachers List Press 1\tTo See Students List Press 2\n\tTo Return back Press 3\tTo Home for 4\tTo Exit Press 0\n");
                    printf("______________________________________________________________________________________________________\n\n");
                    printf("\n\t\tSelect option: ");
 
                    scanf("%d",&o10);
                    printf("\n");
                    if(o10==1)
                        printTeacher();
                        else if(o10==4)call();
                    else if(o10==2)
                        printStudent();
                    else if(o10==3)
                        continue;
                    else
                        return 0;
 
                }
                else
                    return 0;
 
            }
        }

        else
            return 0;
    }
}
 
 
int main()
{
    int o1,o2,o3,o4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16,o17,o18,o19,o20;
    char pass[32],password[]= {"password"};
    printf("\t\t\t\tWelcome to our Project\n\t\t==================================================\n\n");
   
    printf("______________________________________________________________________________________________________\n\n");
    printf("------------------------------------------------------------------------------------------------------\n\n");
    call();
    return 0;
 
}
