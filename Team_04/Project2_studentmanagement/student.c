#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    int age;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nRoll number %d\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }
    printf("\n\nDisplaying Information:\n");    
    for (i = 0; i < 5; ++i) {
    printf("\nRoll number: %d\n",i+1);
    printf("Name: ");
    puts(s[i].Name);
    printf("Age: %.d", s[i].age);
    printf("\n");
    }
    return 0;
}