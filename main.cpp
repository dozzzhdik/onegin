#include "allfunctions.h"

// свой ассерт
// структуры

int main()
{
    //printf("programm started\n");

    FILE *onegintext = fopen("onegintext.txt","r");
    FILE *oneginsorted = fopen("oneginsorted.txt", "w");

    //printf("files opened\n");

    int filestoread = 1;
    size_t numberofsymbols = findnumberofsymbols(onegintext);

    //printf("numofsym: %d\n", numberofsymbols);

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

    createstrptr(onegin, strptr);
    printf("strptr created succesfully!\n");

    //bubblesortBEG(strptr, strcounter);
    // printf("onegin has been sorted from beggining!\n");
    printf("qsort started\n");


    // printf("str1 = %s\n", strptr[0]);
    // printf("str2 = %s\n", strptr[1]);
    //int (*compare) (const void* par1, const void* par2) = qsortEND;

    // const char* str1 = "apple";
    // const char* str2 = "banana";
    // printf("strcmp = %d\n", strcmpEND(str1, str2));
    qsort(strptr, strcounter, sizeof(strptr[0]), qsortEND);

    printf("output started\n");
    output(strptr, strcounter, oneginsorted);

    printf("programm works correctly!");

    fclose(onegintext);
    fclose(oneginsorted);

    free(onegin);
    free(strptr);

    return 0;
}
