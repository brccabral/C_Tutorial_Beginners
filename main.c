#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sayHi(char name[], int age);
double cube(double number);

int main()
{
    file_read_write();

    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}

double cube(double number){
    return number * number * number;
}
