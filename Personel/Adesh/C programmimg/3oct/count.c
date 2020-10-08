#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
    FILE *fp; 
    char ch; 
    int wrd=0,charctr=0;
    char fname[20];
    printf(" Enter the filename to be opened : ");
	scanf("%s",fname);    

    fp=fopen(fname,"r"); 
    if(fp==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else 
        { 
          ch=fgetc(fp); 
          while(ch!=EOF) 
            { 
                 
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fp); 
            }
        printf("\n The number of words is : %d\n",wrd); 
        printf(" The number of characters is: %d\n",charctr-1);         
        } 
    fclose(fp); 
}
