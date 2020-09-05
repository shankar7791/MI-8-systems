#include <stdio.h>
int main()
{
  int s1,s2,s3;
  printf(" enter 3 sides of triangle\n");
  scanf("%d%d%d", &s1,&s2,&s3);
  if((s1+s2) >s3)
  {
    if((s2+s3)>s1)
    {
    if((s1+s3)>s2)
     {
      printf("triangle is valid");
}
else
{
printf("triangle is not valid");
}
}
else
{
printf("trianggle is not valid");
}
}
else
{
printf("triangle is not vaqlid)");
}
return 0;
}

