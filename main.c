#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age);
double cube(double number);

int main()
{
    //numbers();
    //input();
    calculator();
    //madlibs();
    //arrays();
    //printf("Top\n");
    //sayHi("John", 20);
    //sayHi("Jane", 40);
    //sayHi("Tom", 51);
    //printf("Bottom\n");
    //printf("Answer %f\n", cube(3.0));
    //printf("Answer %f\n", cube(7.0));
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}

double cube(double number){
    return number * number * number;
}
