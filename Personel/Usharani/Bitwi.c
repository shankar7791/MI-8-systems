#include <stdio.h>

int main()
{
  //1. & AND Bitwise operator
  //2. | OR
  //3. ^ XOR
  //4. !
  //5. ~
 // 6. << , >> upgrade- left shift and right shift operator...

    int a=12, b=25;

    //12   0000 1100
    //25   0001 1001

     //12 & 25 = (1000) 8
     //12 | 25 = (11101) 29

    printf("\n %d AND Value", a&b);
    printf("\n %d OR Value", a|b);
    printf("\n %d XOR Value", a^b);

    printf("\n a<<1 = %d\n", a << 1);
    printf("\n a>>1 = %d\n", a >> 1);


}
