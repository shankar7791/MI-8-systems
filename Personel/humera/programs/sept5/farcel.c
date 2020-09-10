//*program to conert celsius to fahrenhite*//
//*celsius and fahrenhite table*//

#include <stdio.h>
int main()
 {
    int far,celsius;
    int lower,upper,step;
    lower=0;
    upper=300;
    step =20;
    printf("celsius\tfarenheit\n");  \\*table heading*\\
    far=lower;
    while(far<=upper)
      {
          celsius=5*(far-32)/9;
          printf("%d\t%d\n",far,celsius);
          far=far+step;
      }
 }
