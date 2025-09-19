#include "allfunctions.h"

int main()
{
    int strcounter = 5096;
    int numberofsymbols = 161765;
    int filestoread = 1;
    char** strptr = (char**) (calloc(strcounter, sizeof(char*)));
    char* onegin = (char*) (calloc(numberofsymbols, sizeof(char)));
    FILE *onegintext = fopen("onegintext.txt","r");
    FILE *oneginsorted = fopen("oneginsorted.txt", "w");
    fread(onegin, numberofsymbols, filestoread, onegintext);

    //puts(onegin);

    createstrptr(onegin, strptr);
    printf("strptr created succesfully!\n");

//     bubblesortBEG(strptr, strcounter);
//     printf("onegin is sorted from beggining!\n");
//
//     output(strptr, strcounter, oneginsorted);

    bubblesortEND(strptr, strcounter);
    printf("onegin is sorted from end!\n");

    output(strptr, strcounter, oneginsorted);

    //qsort(text, 5, sizeof(char*), comparestr(par1, par2, strptr, strcounter));



    //printf("First letter adress: %p\n", &strptr[0]);
    //printf("First letter: %s", (char*)(&strptr[0]));

    //puts(strptr);

    printf("programm works correctly!");

    fclose(onegintext);
    fclose(oneginsorted);
    printf("salam");

    free(onegin);
    free(strptr);

    return 0;
}
