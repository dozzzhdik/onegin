#include "allfunctions.h"

void bubblesortBEG(text_t *text)
{
    printf("bubblesort started\n");
    int swapcounter = 1;
    int j = 1;
    while (swapcounter > 0)
    {
        swapcounter = 0;
        for (int i = 0; i < text->strcounter - j; i++)
        {
            if (strcmpBEG(text->strptr[i+1], text->strptr[i+2]) == 1)
                swapcounter += swap(&(text->strptr[i]), &(text->strptr[i+1]));
            //printf("\nstrcmpBEG = %d\n\n", strcmpBEG(strptr[i], strptr[i+1]));
            //printf("swapcounter: %d\n", swapcounter);
        }
        j++;
    }
    printf("onegin has been sorted from the beggining!\n\n");
}

