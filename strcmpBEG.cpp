#include "allfunctions.h"

int strcmpBEG(char* str1, char* str2) // получаем адрес начала первой строки
{
    //printf("text->strptr[i] = %s\n", str1);
    //printf("text->strptr[i+1] = %s\n", str2);
    //printf("strcmp started\n");
    int strlen1 = nstrlen(str1);
    int strlen2 = nstrlen(str2);
    //printf("strlen1 = %d", strlen1);

    int i = 0;
    int k = 0;

    while(strlen1 > i && strlen2 > k)
    {
        while(!isalpha(str1[i]))
            i++;

        while(!isalpha(str2[k]))
            k++;

        if (tolower(str1[i]) > tolower(str2[k]))
            return 1;
        else if (tolower(str1[i]) < tolower(str2[k]))
            return -1;

        i++;
        k++;
    }
    //printf("strcmp ended\n");
    return 0;

                 //comparing by callocing only letters strings
//     char* cstrptr1 = stronlyletters(strptr1);
//     char* cstrptr2 = stronlyletters(strptr2);
//
//     //printf("strcmpBEG started\n");
//
//     // int skipped1 = skipnotalphaBEG(cstrptr1);
//     // int skipped2 = skipnotalphaBEG(cstrptr2);
//
//     int cstrlen1 = nstrlen(cstrptr1);
//     int cstrlen2 = nstrlen(cstrptr2);
//
//     //printf("skipped1 = %d\n", skipped1);
//     //printf("skipped2 = %d\n", skipped2);
//
//     //printf("cstrptr1 = %s\n", cstrptr1);
//
//     //printf("strptr[skipped] = %c\n", strptr1[skipped1]);
//     int i = 0;
//     while (cstrlen1 > i && cstrlen2 > i)
//     {
//         if (cstrptr1[i] > cstrptr2[i])
//             return 1;
//
//         else if (cstrptr1[i] < cstrptr2[i])
//             return -1;
//
//         else
//             i++;
//     }
//     //printf("strcmpBEG ended\n");
//     // free(cstrptr1);
//     // free(cstrptr2);
//     return 0;
}
