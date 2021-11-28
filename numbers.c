#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int numbers()
 {
    printf("Hello\n\"World\n");
    printf("My favorite %s is %f\n", "number", 9.78);

    int favNum = 90;
    char letter = 'b';
    printf("My favorite %c is %d\n", letter, favNum);

    printf("%f\n", 8.9 + 5.3);
    printf("%f\n", 8 + 5.3);
    printf("%d\n", 5 / 4);
    printf("%f\n", 5 / 4.0);
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(36.324));
    printf("%f\n", floor(36.724));

     return 0;
 }
