#include <stdio.h>
#include <stdlib.h>
// binery search function
int BinerySearch(int array[], int n, int search)
{
  int first, last, middle;

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last)
  {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search)
    {
      printf(" \n %d found at location %d", search, middle + 1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last) / 2;
  }
  if (first > last)
  {
    printf("\n Not found! \n %d is not found in the list.", search);
  }
  return 0;
}
// Linear serach function

int LinearSearch(int array[], int c, int n, int search)
{

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("%d is found at location %d.\n", search, c + 1);
      break;
    }
  }
  if (c == n)
    printf("\n Not found! \n  %d is not found in the list.\n", search);

  return 0;
}