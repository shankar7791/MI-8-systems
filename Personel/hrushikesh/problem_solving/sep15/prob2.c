#include<stdio.h>
int main()
{
  int a;
  char c;
  float f;

  printf("Enter the value of int\n");
  scanf("%d",&a);

  printf("\nEnter The value of float\n");
  scanf("%f",&f);

  printf("\nEnter the value of char \n");
  scanf("%c",&c);

  printf("\n The value of integer :%d\n",a);
  printf("\n The value of charector :%c\n",c);
  printf("\n The value of float:%f\n",f);
  printf("\n The value of integer (ROUNDED):%.2f\n",f);

return 0;
}
