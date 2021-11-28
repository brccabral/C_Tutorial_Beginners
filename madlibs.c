#include <stdlib.h>

int madlibs()
{
    char color[20];
    char pluralNoun[20];
    char celebrityFirst[20];
    char celebrityLast[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityFirst, celebrityLast);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirst, celebrityLast);
}
