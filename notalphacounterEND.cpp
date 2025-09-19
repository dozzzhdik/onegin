#include "allfunctions.h"

int notalphacounterEND(char* strptr)
{
    int skipnotalpha = 0;
    int i = 0;
    while (isalpha(*(strchr(strptr, '\n') - 1 - i)) < 1)
    {
        skipnotalpha++;
        i++;
    }
    //printf("%d", skipnotalpha);
    return skipnotalpha;
}
