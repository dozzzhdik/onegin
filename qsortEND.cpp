#include "allfunctions.h"

int qsortEND(const void* par1, const void* par2)
{
    //printf("qsortEND started\n");
    const char* str1 = *(char**)par1;
    const char* str2 = *(char**)par2;
    return strcmpEND(str1, str2);
}
