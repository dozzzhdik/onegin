#include "allfunctions.h"

int nstrlen(const char* str)
{
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    return i;
}
