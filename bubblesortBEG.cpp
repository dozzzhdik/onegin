#include "allfunctions.h"

void bubblesortBEG(char** strptr, int strcounter)
{
    char* swapvalue = 0;
    int swapcounter = 1;
    while (swapcounter > 0)
    {
        swapcounter = 0;
        for (int i = 0; i < strcounter - 1; i++)
        {
            //char before = *strptr[i];
            *strptr[i] = tolower(*strptr[i]);
            if (strcmp(strptr[i], strptr[i+1]) > 0)
            {
                swapvalue = strptr[i];
                strptr[i] = strptr[i+1];
                strptr[i+1] = swapvalue;
                swapcounter++;
                //*(strptr[i+1]) = before;
                //printf("after lower case swap\n");
            }
        }
    }
}
