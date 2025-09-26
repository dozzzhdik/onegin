#include "allfunctions.h"

//with strchr

int createstrptr(text_t *text)
{
    int linescounter = 0;
    char* ptronstr = text->onegin;
    char* Optr = strchr(text->onegin, '\0');
    text->strptr[linescounter] = text->onegin; // getting first element's adress
    text->strptr_original_onegin[linescounter] = text->onegin; // getting first element's adress
    //printf("text->onegin = %d", *text->onegin);
    while (ptronstr < Optr)
    {
        ptronstr = strchr(ptronstr, '\n') + 1;
        linescounter++;
        text->strptr[linescounter] = ptronstr;
        text->strptr_original_onegin[linescounter] = ptronstr;
        //printf("start of a new line has adress: %p\n", text->strptr_original_onegin[linescounter]);
    }
    printf("\nstrptr created succesfully!\n\n");
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

