#include "allfunctions.h"

int outputoriginalonegin(files_t files, text_t text)
{
    for(int i = 0; i < text.strcounter; i++)
    {
        for(int j = 0; text.strptr_original_onegin[i][j] != '\n'; j++)
        {
            fputc(text.strptr_original_onegin[i][j], files.oneginsorted);
        }
        fputc('\n', files.oneginsorted);
    }

    fputc('\n', files.oneginsorted);
    fputc('\n', files.oneginsorted);
    fputc('\n', files.oneginsorted);

    return 0;
}
