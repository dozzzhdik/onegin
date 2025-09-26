#include "allfunctions.h"

void filesroutine(files_t *files, text_t *text)
{
    files->onegintext = fopen("onegintext.txt","r");
    files->oneginsorted = fopen("oneginsorted.txt", "w");

    //printf("files opened\n");

    files->filestoread = 1;
    files->numberofsymbols = findnumberofsymbols(files->onegintext);

    text->onegin = (char*) (calloc(files->numberofsymbols + 1, sizeof(char)));
    text->onegin[files->numberofsymbols] = '\0';
    //printf("onegin calloced \n");

    fread(text->onegin, files->numberofsymbols, files->filestoread, files->onegintext);
    //printf("onegin fread\n");
    //printf("onegin: %p\n", onegin);
    //printf("onegin: %c\n", onegin[numberofsymbols]);

    //onegin[numberofsymbols] = '\0';

    text->strcounter = countstr(text->onegin);
    text->strptr = (char**) (calloc(text->strcounter + 1, sizeof(char*)));
    text->strptr_original_onegin = (char**) (calloc(text->strcounter + 1, sizeof(char*)));
}
