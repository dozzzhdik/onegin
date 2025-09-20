#include "allfunctions.h"

int strcmpBEG(char* strptr1, char* strptr2) // получаем адрес начала первой строки
{
    //printf("strcmpBEG started\n");
    int skipped1 = skipnotalphaBEG(strptr1);
    int skipped2 = skipnotalphaBEG(strptr2);
    int strlen1 = nstrlen(strptr1);
    int strlen2 = nstrlen(strptr2);

    //printf("skipped1 = %d\n", skipped1);
    //printf("skipped2 = %d\n", skipped2);
    //printf("nstrlen1 = %d\n", strlen1);
    //printf("strptr[skipped] = %c\n", strptr1[skipped1]);

    while (strlen1 - skipped1 > 0 || strlen2 - skipped2 > 0)
    {
        if (strptr1[skipped1] > strptr2[skipped2])
            return 1;

        else if (strptr1[skipped1] < strptr2[skipped2])
            return -1;

        else
        {
            skipped1++;
            skipped2++;
        }
    }
    //printf("strcmpBEG ended\n");
    return 0;
}
