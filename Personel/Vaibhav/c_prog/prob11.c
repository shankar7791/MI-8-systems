#include <stdio.h>
 
int main()
{
    unsigned int num;
    int cnt = 0;
 
    printf("Enter the unsigned integer:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if ((num & 1) == 1)
            cnt++;
        num = num >> 1;
    }
    printf("number of one's are :\n%d\n", cnt);
    return 0;
}
