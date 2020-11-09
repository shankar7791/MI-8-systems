#include <iostream>
using namespace std;

int
main()

{
  int a[10], n, i;
  cout<< "enter number";
  cin>>n;

  for(i=0; n>0; i++)
  {
    a[i]=n%2;
    n=n/2;

  }
cout<< "binary code is ==";

for(i=i-1; i>=0; i--)
{
  cout<<a[i];

}


}
