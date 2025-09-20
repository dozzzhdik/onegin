#include "allfunctions.h"

// свой ассерт
// структуры

int main()
{
    int strcounter = 5097;
    int numberofsymbols = 161766;
    int filestoread = 1;
    char** strptr = (char**) (calloc(strcounter, sizeof(char*)));
    char* onegin = (char*) (calloc(numberofsymbols, sizeof(char)));
    FILE *onegintext = fopen("onegintext.txt","r");
    FILE *oneginsorted = fopen("oneginsorted.txt", "w");
    fread(onegin, numberofsymbols, filestoread, onegintext);

    createstrptr(onegin, strptr);
    printf("strptr created succesfully!\n");

    bubblesortBEG(strptr, strcounter);
    printf("onegin is sorted from beggining!\n");

    output(strptr, strcounter, oneginsorted);

    printf("programm works correctly!");

    fclose(onegintext);
    fclose(oneginsorted);

    free(onegin);
    free(strptr);

    return 0;
}
