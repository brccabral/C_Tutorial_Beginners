#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int calculator()
 {
    double num1;
    double num2;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+'){ // need to use single quote to compare char
        printf("%f\n", num1 + num2);
    }else if(op == '-'){
        printf("%f\n", num1 - num2);
    }else if(op == '/'){
        printf("%f\n", num1 / num2);
    }else if(op == '*'){
        printf("%f\n", num1 * num2);
    }else{
        printf("Invalid operator\n");
    }

    return 0;
 }
