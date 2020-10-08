#include <stdio.h>
int Prime(int n);
int Amstrong(int n);
int 
main(){
    int n1, flag;
    printf("Enter positive integers: ");
    scanf("%d", &n1);
    flag = Prime(n1);
    if (flag == 1)
    printf("It is Prime number\n");
    else printf("It is not prime number\n");
    flag = Amstrong(n1);
    if (flag == 1)
    printf("It is Amstrong number\n");
    else printf("It is not Amstrong number\n");
    return 0;
}

int Prime(int n) {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int Amstrong(int n){
    int temp = n, sum = 0, r;    
while(n>0)    
{    
r = n%10;    
sum = sum+(r*r*r);    
n= n/10;    
}    
if(temp == sum)    
return 1;    
else    
return 0;  
}