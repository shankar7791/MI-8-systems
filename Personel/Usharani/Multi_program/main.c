#include <stdio.h>
#include <stdlib.h>

extern void add(int a, int b);
extern void sub(int a, int b);
extern void mul(int a, int b);
extern void division(int a, int b);
extern void mod(int a, int b);


int
main() {
    int ch, a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    while (1) {
        printf("\n\n---------OPTION----------\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1: add(a,b);
                break;

        case 2: sub(a,b);
                break;
        
        case 3: mul(a,b);
                break;

        case 4: division(a,b);
                break;

        case 5: mod(a,b);
                break;


        case 6: exit(0);

        default: printf("You entered a wrong choice!!!!!!");
                 break;
        }
    }
    
    return 0;
}
