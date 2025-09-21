#include "allfunctions.h"

int countstr(char* onegin)
{
    //printf("countstr started\n");
    int strcounter = 0;
    char* nptr = onegin;
    //printf("nptr = %p\n", onegin);
    while (strchr(&onegin[nptr - onegin], '\n') != NULL)
    {
        nptr = strchr((&onegin[nptr - onegin]), '\n') + 1;
        strcounter++;
    }
    //printf("strcounter: %d", strcounter);
    return strcounter;
}
