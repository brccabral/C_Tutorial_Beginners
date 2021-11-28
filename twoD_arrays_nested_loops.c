#include <stdio.h>
#include <stdlib.h>

int twoD_arrays_nested_loops()
{
    int nums[3][2] =
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int emptyNums[3][2];

    printf("%d\n", nums[2][1]);

    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
    }
    printf("\n");

    return 0;
}
