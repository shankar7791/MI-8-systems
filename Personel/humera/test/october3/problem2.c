#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    char ch;
    int wrd=1,charctr=1;
    char fname[20];
    printf("\n\n count the no of words and character:\n");
    printf("input the filename:");
    scanf("%s",fname);
    fptr=fopen(fname,"r");
    if(fptr==NULL)
    {
        printf("file not exits");

    }
    else 
    {
        ch=fgetc(fptr);
        printf("the content of file %s are: ",fname);
        while(ch!=EOF)
        {
            printf("%c",ch);
            if(ch==' '||ch=='\n')
            {
                wrd++;
            }
            else
            {
                charctr++;
            }
            ch=fgetc(fptr);
            
        }
        printf("\n the number of words in file %s are:%d\n",fname,wrd-2);
        printf("the number of character in file  %s :%d \n",fname,charctr-1);
    }
    fclose(fptr);
}