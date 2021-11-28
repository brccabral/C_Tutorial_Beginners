#include <stdio.h>
#include <stdlib.h>

int arrays()
{
    int luckNumbers[] = {4, 8, 15, 16, 23, 42};

    printf("%d\n", luckNumbers[0]);
    printf("%d\n", luckNumbers[1]);
    printf("%d\n", luckNumbers[2]);
    printf("%d\n", luckNumbers[5]);

    luckNumbers[1] = 200;
    printf("%d\n", luckNumbers[1]);

    int newNumbers[10];
    newNumbers[1] = 80;
    printf("%d\n", newNumbers[0]); // will print incorrect random number
    printf("%d\n", newNumbers[1]);

    char phrase[20] = "Array";
    printf("%s.\n", phrase);

    return 0;
}
