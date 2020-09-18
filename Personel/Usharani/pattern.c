#include<stdio.h>
#include<stdlib.h>

int
main(){
    int i,n,j,k,m;
    char c;
    printf("Enter how many Rows you want:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {   
         for(k=n;k>=i;k--)
            { printf(" ");}
            c ='A';
            for(j=0;j<=i;j++)
            {  
                //for(c='A';c<='Z';c++)
                printf("%c",c);
                c++;
            }c--;   
            for(m=i-1;m>=0;m--)
            {   c--;
                printf("%c",c);
                
            }
        printf("\n");
        
    }

    return 0;
}