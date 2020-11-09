#include <stdio.h>
int
main(){
  int array[8]= {1,2,3,4,5,6,7,8};
  int i,sum=0;
  float avg;
  avg =0;

  for(i = 0; i <8; i++){
    sum = sum + array[i];
  }
  avg=(float)sum/8;
    printf("sum of array is %d", sum);
    printf("avg of array is %.2f", avg);


  return 0;
}
