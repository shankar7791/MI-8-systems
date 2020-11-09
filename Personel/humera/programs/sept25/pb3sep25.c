/*c program to demonstrate exampke of structure pointer */
#include<stdio.h>
struct item
{
  char itemname[30];
  int qty;
  float price;
  float amount;
};
int main()
{
  struct item itm;
  struct item *pitem;
  pitem=&itm;
  //read values using pointer
  printf("enter the product name: ");
  gets(pitem->itemname);
  printf("enter price:");
  scanf("%f",&pitem->price);
  printf("enter quantity : ");
  scanf("%d",&pitem->qty);
  pitem->amount=(float)pitem->qty*pitem->price;
  //print item details
  printf("\nName: %s",pitem->itemname);
  printf("\nprice:%f",pitem->price);
  printf("\nquantity:%d",pitem->qty);
  printf("\ntotal amount:%f",pitem->amount);
  return 0;
}
