#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int i, j;

  	printf("\n Please Enter the First String :  ");
  	gets(Str1);

  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);

  	i = 0;
	while( Str1[i]!='\0')
	{
		i++;
	}

  	j = 0;
  	while( Str2[j]!='\0')
  	{
  		Str1[i] = Str2[j];
  		i++;
  		j++;
  	}
  	Str1[i] = '\0';

  	printf("\n String after the Concatenate = %s", Str1);

  	return 0;
}
