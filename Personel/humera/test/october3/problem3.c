#include <stdio.h>
#include<string.h>
#define max 256
int main()
{
    int lno,ctr=0;
    char ch;
    FILE *fptr1,*fptr2;
    char fname[max];
    char str[max],temp[]="temp.txt";
    printf("\n delete specificline from file:\n");
    printf("input the file name:");
    scanf("%s",fname);
    fptr1=fopen(fname,"r");
    if(!fptr1)
    {
        printf("file not found:\n");
        return 0;
    
    }
    fptr2=fopen(temp,"w");
    if(!fptr2)
    {
        printf("unable to open temporary file:\n");
        fclose(fptr1);
        return 0;
    }
    printf("input the line to remove:\n");
    scanf("%d",&lno);
    lno++;
    while(!feof(fptr1))
    {
        strcpy(str,"\0");
        fgets(str,max,fptr1);
        if(!feof(fptr1))
        {
            ctr++;
            if(ctr!=lno)
            {
                fprintf(fptr2,"%s",str);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp,fname);
    fptr1=fopen(fname,"r");
    ch=fgetc(fptr1);
    printf("now the content of file is %s :\n",fname);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr1);
    }
    fclose(fptr1);
    return 0;
}