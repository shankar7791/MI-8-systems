#include <stdio.h>
#define SIZE 8
int main()
{
unsigned int n;
printf ("enter the no \n");
scanf("%d",&n);
int c[SIZE]={0};
int i=SIZE-1;
printf("binary representationis:");
while(n!=0)
{
c[i--]=n&1;
n=n>>1;
}
for(int j=0;j<SIZE;j++)
printf("%d",c[j]);
printf("\n");
for(int j=0,k=SIZE-1;j<k;j++,k--)
{
if(c[j]!=c[k])
{
printf("number is not palindrome\n");
return 0;
}
}
printf("number is palindrome\n");
return 0;
}

