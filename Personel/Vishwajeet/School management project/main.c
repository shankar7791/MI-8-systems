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
