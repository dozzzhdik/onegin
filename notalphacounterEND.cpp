#include "allfunctions.h"

int notalphacounterEND(char* strptr)
{
    int skipnotalpha = 0;
    int i = 0;

    char* end_line = strchr(strptr, '\n');

    while (isalpha(*(end_line - 1 - i)) == NULL)
    {
        skipnotalpha++;
        i++;
    }
    printf("%d", skipnotalpha);
    return skipnotalpha;
}
