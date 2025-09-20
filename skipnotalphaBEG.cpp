#include "allfunctions.h"

int skipnotalphaBEG(char* str)
{
    // printf("str - %p\n", str);
    // printf("str[0] = %c\n", str[0]);
    // printf("'A' = %d\n");
    //printf("skipnotalphaBEG started\n");

    int skipped = 0;
    while (isalpha(str[skipped]) == '\0')
        skipped++;

    //printf("skipnotalphaBEG edned; skipped symbols: %d\n", skipped);

    return skipped;
}
