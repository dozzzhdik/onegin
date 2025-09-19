#include "allfunctions.h"

int main()
{
    int strcounter = 5096;
    int numberofsymbols = 161765;
    int filestoread = 1;
    char** strptr = (char**) (calloc(strcounter, sizeof(char*)));
    char* onegin = (char*) (calloc(numberofsymbols, sizeof(char)));
    FILE *onegintext = fopen("onegintext.txt","r");
    fread(onegin, numberofsymbols, filestoread, onegintext);

    //puts(onegin);

    createstrptr(onegin, strptr, numberofsymbols);

    bubblesort(strptr, strcounter);

    //qsort(text, 5, sizeof(char*), comparestr(par1, par2, strptr, strcounter));

    output(strptr, strcounter);

    //printf("First letter adress: %p\n", &strptr[0]);
    //printf("First letter: %s", (char*)(&strptr[0]));

    //puts(strptr);

    printf("programm works correctly!");

    fclose(onegintext);

    free(onegin);
    free(strptr);

    return 0;
}
