#include "allfunctions.h"

                          //with strchr

int createstrptr(char* onegin, char** strptr)
{
    int strcounter = 0;
    char* ptronstr = onegin;
    strptr[strcounter] = onegin; // getting first element adress
    char* Optr = strchr(onegin, '\0');
    while (ptronstr < Optr)
    {
        ptronstr = strchr((&onegin[ptronstr - onegin]), '\n') + 1;
        strcounter++;
        strptr[strcounter] = ptronstr;
        //tolower(*strptr[strcounter]);
        //printf("start of a new line has adress: %p\n", ptronstr);
    }
    return 0;
}

                          //without strchr

// int createstrptr(char* onegin, char** strptr, size_t numberofsymbols)
// {
//     int strcounter = 0;
//     strptr[strcounter] = onegin;
//     for (int i = 1; i < numberofsymbols; i++)
//     {
//         if (onegin[i] == '\n')
//         {
//             strcounter++;
//             strptr[strcounter] = &onegin[i+1];
//             tolower(*strptr[strcounter]);
//             //printf("start of a new line has adress: %p\n", &onegin[i]);
//         }
//     }
//     return 0;
// }

