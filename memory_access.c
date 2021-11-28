#include <stdio.h>
#include <stdlib.h>

int memory_access()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    // print the pointer values (memory addresses)
    printf("%p\n", &age);
    printf("%p\n", &gpa);
    printf("%p\n", &grade);

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    // put the pointer values in variables
    int *pAge = &age;
    double *pGpa = &gpa;
    char *pGrade = &grade;

    // print the pointer value
    printf("%p\n", pAge);
    printf("%p\n", pGpa);
    printf("%p\n", pGrade);

    // print the orinal value from the pointer
    printf("%d\n", *pAge);
    printf("%f\n", *pGpa);
    printf("%c\n", *pGrade);

    // we can stack & and * as many times we want
    printf("%d\n", *&age);
    printf("%p\n", &*&age);

    return 0;
}
