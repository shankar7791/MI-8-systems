#include <stdio.h>
void
main()
{
  int age;
  printf("enter the age");
  scanf("%d", &age);
  if(age < 18){
    printf(" candidate are not elidgible ");
  }
  else{
    printf(" candidate are elidgible ");
  }

}
