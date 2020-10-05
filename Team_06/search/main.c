#include <stdio.h>

extern int binarySearch(int *, int, int, int);
extern int linearSearch(int *, int, int);
void
main ()
{


      int arr[100];
      int n = 1;
      int i, num, a, opt, opt1;

      while (1)
      {

          printf("\nEnter how many number to Sort:\n");
          scanf("%d", &n);
          if (n > 0)
          {
              break;
          }
          else
              printf("Array size must be positive.\n");
      }
      printf("Enter Numbers:\n");
      for (i = 0; i < n; i++)
      {
          printf("Enter %d element :", i + 1);
          scanf("%d", &arr[i]);
      }




    while (1)
        {
            printf("Select Option u want to search.\n");
            printf("1.Binary search .\n");
            printf("2. Linear Search\n");
            printf("Enter Option:");
            scanf("%d", &opt1);
            switch (opt1)
      {
            case 1:
              a = binarySearch(arr, 0, 9, num);
              if(a != -1)
              {
                printf(" element found at location %d ", a);
              }
              else

                printf(" element not found ");
                break;

              case 2:
              a = linearSearch(arr, n, num);
              if (a == -1)
              {
                  printf("Number is Not Found.\n");
              }
              else
                  printf("Number is found at %d Position.\n", a + 1);
              break;

              default:

          printf("\nIncorrect Option. \n\n");
          break;

}
}
}
