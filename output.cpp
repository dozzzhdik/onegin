#include "allfunctions.h"

int output(files_t files, text_t text)
{
    for(int i = 0; i < text.strcounter; i++)
    {
        for(int j = 0; text.strptr[i][j] != '\n'; j++)
        {
            //printf("%c", strptr[i][j]);
            fputc(text.strptr[i][j], files.oneginsorted);
        }
        fputc('\n', files.oneginsorted);
    }

    fputc('\n', files.oneginsorted);
    fputc('\n', files.oneginsorted);
    fputc('\n', files.oneginsorted);
    return 0;
}
