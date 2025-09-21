#include "allfunctions.h"

size_t findnumberofsymbols(FILE *onegintext)
{
    size_t numberofsymbols = 0;

    fseek(onegintext, 0, SEEK_END);
    numberofsymbols = ftell(onegintext);
    fseek(onegintext, 0, SEEK_SET);

    printf("numberofsymbols: %d\n", numberofsymbols);

    return numberofsymbols;
}
