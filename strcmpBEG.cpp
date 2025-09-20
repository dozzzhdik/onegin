#include "allfunctions.h"

int strcmpBEG(char* strptr1, char* strptr2) // получаем адрес начала первой строки
{
    //char** strptr = (char**) (calloc(strcounter, sizeof(char*)));

    char* cstrptr1 = stronlyletters(strptr1);
    char* cstrptr2 = stronlyletters(strptr2);

    //printf("strcmpBEG started\n");

    // int skipped1 = skipnotalphaBEG(cstrptr1);
    // int skipped2 = skipnotalphaBEG(cstrptr2);

    int cstrlen1 = nstrlen(cstrptr1);
    int cstrlen2 = nstrlen(cstrptr2);

    //printf("skipped1 = %d\n", skipped1);
    //printf("skipped2 = %d\n", skipped2);

    printf("cstrptr1 = %s\n", cstrptr1);

    //printf("strptr[skipped] = %c\n", strptr1[skipped1]);
    int i = 0;
    while (cstrlen1 > i && cstrlen2 > i)
    {
        if (cstrptr1[i] > cstrptr2[i])
            return 1;

        else if (cstrptr1[i] < cstrptr2[i])
            return -1;

        else
            i++;
    }
    printf("strcmpBEG ended\n");
    return 0;
}
