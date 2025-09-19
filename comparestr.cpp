#include "allfunctions.h"

int comparestr(const void* par1, const void* par2, int strcounter, const char** strptr)
{
    for (int i = 0; i < strcounter - 1; i++)
    {
        par1 = strptr[i];
        par2 = strptr[i+1];
        const char* letter1 = *(char**)par1;
        const char* letter2 = *(char**)par2;
        return strcmp(letter1, letter2);
    }
}
