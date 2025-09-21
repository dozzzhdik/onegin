#include "allfunctions.h"

// свой ассерт
// структуры

int main()
{
    printf("programm started\n");

    FILE *onegintext = fopen("onegintext.txt","r");
    FILE *oneginsorted = fopen("oneginsorted.txt", "w");

    printf("files opened\n");

    int filestoread = 1;
    size_t numberofsymbols = findnumberofsymbols(onegintext);

    //printf("numofsym: %d\n", numberofsymbols);

    char* onegin = (char*) (calloc(numberofsymbols, sizeof(char)));
    printf("onegin calloced \n");
    fread(onegin, numberofsymbols, filestoread, onegintext);
    printf("onegin fread\n");
    printf("onegin: %p\n", onegin);
    printf("onegin: %c\n", onegin[numberofsymbols - 1]);
    //onegin[numberofsymbols] = '\0';
    int strcounter = countstr(onegin);
    printf("strcounter = %d\n", strcounter);
    char** strptr = (char**) (calloc(strcounter, sizeof(char*)));


    createstrptr(onegin, strptr);
    printf("strptr created succesfully!\n");

    bubblesortBEG(strptr, strcounter);
    printf("onegin is sorted from beggining!\n");

    output(strptr, strcounter, oneginsorted);

    //printf("programm works correctly!");

    fclose(onegintext);
    fclose(oneginsorted);

    free(onegin);
    free(strptr);

    return 0;
}
