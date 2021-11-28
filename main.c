#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age);

int main()
{
    //numbers();
    //input();
    //calculator();
    //madlibs();
    //arrays();
    printf("Top\n");
    sayHi("John", 20);
    sayHi("Jane", 40);
    sayHi("Tom", 51);
    printf("Bottom\n");
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
