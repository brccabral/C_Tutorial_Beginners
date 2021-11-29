#include <stdio.h>
#include <stdlib.h>

int file_read_write()
{
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting\n");

    fclose(fpointer);

    fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "Kelly, Customer service\n");

    fclose(fpointer);

    char line[255];
    fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);

    return 0;
}
