#include "allfunctions.h"

void bubblesortEND(char** strptr, int strcounter)
{
    int swapcounter = 1;
    while (swapcounter > 0)
    {
        printf("bubblesortedonce");
        swapcounter = comparefromend(strptr, strcounter, swapcounter);
    }
}
