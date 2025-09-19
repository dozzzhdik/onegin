#include "allfunctions.h"

void bubblesort(char** strptr, int strcounter)
{
    char* swapvalue = 0;
    int swapcounter = 1;
    while (swapcounter > 0)
    {
        swapcounter = 0;
        for (int i = 0; i < strcounter - 1; i++)
        {
            if (strcmp(strptr[i], strptr[i+1]) > 0)
            {
                swapvalue = strptr[i];
                strptr[i] = strptr[i+1];
                strptr[i+1] = swapvalue;
                swapcounter++;
            }
        }
    }
    printf("sorted!\n");
}
