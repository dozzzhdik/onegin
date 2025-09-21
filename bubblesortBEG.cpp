#include "allfunctions.h"

void bubblesortBEG(char** strptr, int strcounter)
{
    printf("bubblesortBEG started\n");
    int swapcounter = 1;
    int blyat = 1;
    while (swapcounter > 0)
    {
        swapcounter = 0;
        for (int i = 0; i < strcounter - blyat; i++)
        {
            if (strcmpBEG(strptr[i], strptr[i+1]) == 1)
                swapcounter += swap(&strptr[i], &strptr[i+1]);
            //printf("\nstrcmpBEG = %d\n\n", strcmpBEG(strptr[i], strptr[i+1]));
            //printf("swapcounter: %d\n", swapcounter);
        }
        blyat++;
    }
    //printf("bubblesortBEG ended\n");
}

