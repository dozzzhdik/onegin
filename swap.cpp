#include "allfunctions.h"

int swap(char** strptr1, char** strptr2)
{
    char* swapvalue = *strptr1;
    *strptr1 = *strptr2;
    *strptr2 = swapvalue;
    return 1;
}
