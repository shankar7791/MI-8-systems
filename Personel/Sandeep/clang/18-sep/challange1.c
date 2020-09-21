#include<stdio.h>
int main()
{
    char str[20];
    int i,j;
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);

        }
        printf("\n");
    }
    return 0;

}