#include "allfunctions.h"

int output(char** strptr, int strcounter, FILE* oneginsorted)
{
    printf("\n");
    for(int i = 0; i < strcounter; i++)
    {
        for(int j = 0; strptr[i][j] != '\n'; j++)
        {
            //printf("%c", strptr[i][j]);
            fputc(strptr[i][j], oneginsorted);
        }
        fputc('\n', oneginsorted);
    }
    return 0;
}
