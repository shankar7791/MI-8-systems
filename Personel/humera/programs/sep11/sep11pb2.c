#include <stdio.h>
void increment(int *var)
{
    /* although we are performing the increment on variable
    *var,however the var is the pointer that holds the address of
    *variable num*/
    *var = *var+1;
}
int main()
{
      int num= 20;
      /* this way calling the function is known as call by
      *reference. instead of passing the variable num, we are
      *passing the address of variable num
      */
      increment(&num);
      printf("value of num is: %d",num);
    return 0;
}
