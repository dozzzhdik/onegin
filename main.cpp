#include "allfunctions.h"

int main()
{
    files_t files = {0};
    text_t text = {0};

    filesroutine(&files, &text);

    createstrptr(&text);

    bubblesortBEG(&text);

    printf("output bubblesort started\n");
    output(files, text);
    printf("onegin is output to a file\n\n");

    printf("qsort started\n");
    qsort(text.strptr, text.strcounter, sizeof(text.strptr[0]), qsortEND);
    printf("onegin has been sorted from the end!\n\n");

    printf("output qsort started\n");
    output(files, text);
    printf("onegin is output to a file\n\n");

    closefilesandfreecallocs(files, text);

    printf("programm works correctly!");

    return 0;
}
