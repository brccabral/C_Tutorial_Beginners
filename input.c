#include <stdio.h>
#include <stdlib.h>

int input() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade); //need the extra space to consume the ENTER from above scanf
    printf("Your grade is %c\n", grade);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name); // gets only until before first space
    printf("Your name is %s\n", name);

    char full_name[20];
    printf("Enter your full name: ");
    fgets(full_name, 20, stdin); // receives the ENTER from previous input
    printf("Your full name is %s\n", full_name);


    return 0;
}
