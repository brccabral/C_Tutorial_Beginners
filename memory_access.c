#include <stdio.h>
#include <stdlib.h>

int memory_access()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("%p\n", &age);
    printf("%p\n", &gpa);
    printf("%p\n", &grade);

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;
}
