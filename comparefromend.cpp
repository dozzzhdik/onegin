#include "allfunctions.h"

#define HUY 7

int comparefromend(char** strptr, int strcounter, int swapcounter)
{
    char* swapvalue = 0;
    for (int i = 0; i < strcounter - 1; i++)
    {
        for (int j = 0; (*(strptr[i] + j) != '\n') || (*(strptr[i+1] + j) != '\n'); j++)
        {
            {
                if (strchr(strptr[i], '\n') - 1 - j - notalphacounterEND(strptr[i]) > strchr(strptr[i+1], '\n') - 1 - j - notalphacounterEND(strptr[i+1]))
                {
                    swapvalue = strptr[i];
                    strptr[i] = strptr[i+1];
                    strptr[i+1] = swapvalue;
                    swapcounter++;
                    printf("%d\n", swapcounter);
                }
            }
        }
    }
    return swapcounter;
}
