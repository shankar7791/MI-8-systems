#include<stdio.h>
#include<string.h>
#define max 256
int main()
{
    FILE *fptr1,*fptr2;
    int lno ,linectr=0;
    char str[max],fname[max];
    char new[max],temp[]="temp.txt";
    printf("\n replace a specific line:\n");
    printf("input the file name:");
    fgets(fname,max,stdin);
    fname[strlen(fname)-1]='\0';
    fptr1=fopen(fname,"r");
    if(!fptr1)
    {
        printf("unable to open input file:\n");
        return 0;
    }
    fptr2=fopen(temp,"w");
    if(!fptr2)
    {
        printf("unable to open temporary file to write:\n");
        fclose(fptr1);
        return 0;
    }
    printf("input the content of new line:\n");
    fgets(new,max,stdin);
    printf("input line no to replace:");
    scanf("%d",&lno);
    lno++;
    while(!feof(fptr1))
    {
        strcpy(str,"\0");
        fgets(str,max,fptr1);
        if(!feof(fptr1))
        {
            linectr++;
            if(linectr!=lno)
            {
                fprintf(fptr2,"%s",str);

            }
            else
            {
                fprintf(fptr2,"%s",new);
            }
            
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp,fname);
    printf("replacement successfull:\n");
    return 0;

}

