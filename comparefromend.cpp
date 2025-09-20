#include "allfunctions.h"

int comparefromend(char** strptr, int strcounter, int swapcounter)
{
    char* swapvalue = 0;
    printf("strcounter = %d", strcounter);
    for (int i = 0; i < strcounter - 1; i++)
    {
        char* nptr1 = strchr(strptr[i], '\n');
        char* nptr2 = strchr(strptr[i+1], '\n');
        for (int j = 0; (*(nptr1 - 1 - j) != '\n') || (*(nptr2 - 1 - j) != '\n'); j++)
        {
            if (nptr1 - 1 - j > nptr2 - 1 - j)
            {
                swapvalue = strptr[i];
                strptr[i] = strptr[i+1];
                strptr[i+1] = swapvalue;
                swapcounter++;
                printf("%d\n", swapcounter);
            }
        }
    }
    return swapcounter;
}
