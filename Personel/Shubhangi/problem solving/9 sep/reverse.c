#include <stdio.h>
int main()
{
  int n, rev = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    rev = rev * 10;
    rev = rev + n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d\n", rev);

  return 0;
}