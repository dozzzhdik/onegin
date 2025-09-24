#include "allfunctions.h"

filesroutine(...)
{
    FILE *onegintext = fopen("onegintext.txt","r");
    FILE *oneginsorted = fopen("oneginsorted.txt", "w");

    //printf("files opened\n");

    int filestoread = 1;
    size_t numberofsymbols = findnumberofsymbols(onegintext);

    char* onegin = (char*) (calloc(numberofsymbols + 1, sizeof(char)));
    onegin[numberofsymbols] = '\0';
    //printf("onegin calloced \n");

    fread(onegin, numberofsymbols, filestoread, onegintext);
    //printf("onegin fread\n");
    //printf("onegin: %p\n", onegin);
    //printf("onegin: %c\n", onegin[numberofsymbols]);

    //onegin[numberofsymbols] = '\0';

    int strcounter = countstr(onegin);
    printf("strcounter: %d\n", strcounter);
    char** strptr = (char**) (calloc(strcounter + 1, sizeof(char*)));
}
