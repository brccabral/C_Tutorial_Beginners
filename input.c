#include <stdio.h>
#include <stdlib.h>

int input()
{
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


    return 0;
}
