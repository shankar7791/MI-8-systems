#include <stdio.h>

/* LINEAR SEARCH */

    void linear_search(int search_key, int array[100], int n)
    {

/*Declare Variable */

        int i,location;

        for(i=1; i <= n; i++)
        {

            if(search_key == array[i])
            {

                location = i;



    printf(" %d is FOUND AT LOCATION %d\n",search_key, location);


        }

    }

}

/* Binary Search to find Search Key */

void binary_search(int search_key, int array[100], int n)
{

    int mid,i,low,high;

    low = 1;

    high = n;

    mid = (low + high)/2;

    i=1;

    while(search_key != array[mid])
    {

        if(search_key <= array[mid])
        {

            low = 1;

            high = mid+1;

            mid = (low+high)/2;

        }
        else
        {

            low = mid+1;

            high = n;

            mid = (low+high)/2;

        }

}



    printf("ELEMENT FOUND AT location %d\t", mid);





}
