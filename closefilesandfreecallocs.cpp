#include "allfunctions.h"

void closefilesandfreecallocs(files_t files, text_t text)
{
    fclose(files.onegintext);
    fclose(files.oneginsorted);

    free(text.onegin);
    free(text.strptr);
    free(text.strptr_original_onegin);
}
