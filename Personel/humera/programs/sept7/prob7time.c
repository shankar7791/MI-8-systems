/* read formatted time once through scanf in C language*/

#include <stdio.h>
int main()

{
    int hour,minute,second;

    printf("enter time(in HH:MM:SS)");
    scanf("%02d:%02d:%02d",&hour,&minute,&second);

    printf("entered time is %02d:%02d:%02d\n",hour,minute,second);
    return 0;
}
