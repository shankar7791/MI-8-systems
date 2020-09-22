/*c program merge one sorted array into another sorted array*/
#include <stdio.h>
void merge2arrs(int *bgarr,int bgarrctr,int *smlarr, int smlarrctr)
{
  if(bgarr ==NULL || smlarr == NULL)
  return;
  int bgarrindex=bgarrctr-1,
  smlarrindex = smlarrctr-1,
  mergedarrayindex=bgarrctr+smlarrctr-1;
  while(bgarrindex>=0 && smlarrindex>=0)
  {
    if(bgarr[bgarrindex]>=smlarr[smlarrindex])
    {
      bgarr[mergedarrayindex]=bgarr[bgarrindex];
      mergedarrayindex--;
      bgarrindex--;
    }
  }
  if(bgarrindex<0)
  {
    while(smlarrindex>=0)
    {
      bgarr[mergedarrayindex]=bgarr[bgarrindex];
      mergedarrayindex--;
      bgarrindex--;
    }
  }
}
int main()
{
  int bigarr[13]={10,12,14,16,18,20,22};
  int smlarr[6]={11,13,15,17,19,21};
  int i;
  //---------------------print large array-------------//
  printf("the given large array is\n: ");
  for(i=0;i<7;i++)
  {
    printf("%d\n",bigarr[i]);
  }
  printf("\n");
  //-----------------print small array----------------//
  printf("the given small array is: ");
  for(i=0;i<6;i++)
  {
    printf("%d\n",smlarr[i]);
  }
  printf("\n");
  //-----------------merged array------------------//
  merge2arrs(bigarr,7,smlarr,6);
  
  printf("after merged the new array is: \n");
  for(i=0;i<13;i++)
  {
    printf("%d\n",bigarr[i]);
  }
  return 0;
}
