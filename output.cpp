#include "allfunctions.h"

int output(char** strptr, int strcounter)
{
    printf("\n");
    for(int i = 0; i < strcounter; i++)
    {
        for(int j = 0; strptr[i][j] != '\n'; j++)
        {
            printf("%c", strptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
