#include "allfunctions.h"

int qsortEND(const void* par1, const void* par2)
{
    //printf("qsortEND started\n");
    const char* const* str1 = (const char* const*)par1;
    const char* const* str2 = (const char* const*)par2;
    return strcmpEND(*str1, *str2);
}
