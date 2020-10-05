#include <stdio.h>


int main()
{

/* Declare variables - array_of_number,search_key,i,j,low,high*/

    int array[100],search_key,i,j,n,low,high,location,choice;

    void linear_search(int search_key,int array[100],int n);

    void binary_search(int search_key,int array[100],int n);



/* read the elements of array */

    printf("ENTER THE SIZE OF ELEMENTS:");

    scanf("%d", &n);

    printf("ENTER THE ELEMENTS:\n");

    for(i=1; i <= n; i++)
    {

        scanf("%d", &array[i]);

    }

/* Get the Search Key element for Linear Search */

    printf("ENTER THE ELEMENT U WANT SEARCH:");

    scanf("%d", &search_key);

/* Choice of Search Algorithm */

    printf("  --------------  \n");

    printf("1.LINEAR SEARCH\n");

    printf("2.BINARY SEARCH\n");

    printf("   ------------------ \n");

    printf("ENTER YOUR CHOICE:");

    scanf("%d", &choice);

    switch(choice)
    {

    case 1:

        linear_search(search_key,array,n);

        break;

    case 2:

        binary_search(search_key,array,n);

        break;

    default:

        printf(" INVALID ELEMENT");

}


    return 0;

}
