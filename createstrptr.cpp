#include "allfunctions.h"

int createstrptr(char* onegin, char** strptr, size_t numberofsymbols)
{
    int strcounter = 0;
    strptr[strcounter] = onegin;
    for (int i = 1; i < numberofsymbols; i++)
    {
        if (onegin[i] == '\n')
        {
            strcounter++;
            strptr[strcounter] = &onegin[i+1];
            //tolower(*strptr[strcounter]);
            //printf("start of a new line has adress: %p\n", &onegin[i]);
        }
    }
    return 0;
}
