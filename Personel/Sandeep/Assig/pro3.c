#include <stdio.h>
int main() {
    int num, ori, rem, res= 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    ori = num;

    while (ori != 0) 
    {
        rem = ori % 10;
        res += rem * rem * rem;
        ori = ori/10;
     }

    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}