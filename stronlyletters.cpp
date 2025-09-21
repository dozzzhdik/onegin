#include "allfunctions.h"

char* stronlyletters(char* str)
{
    //printf("stronlyletters started\n");
    int i = 0;
    int numberofonlyletters = 0;
    while(str[i] != '\n')
    {
        if (isalpha(str[i]))
        {
            numberofonlyletters++;
        }
        i++;
        //printf("i = %d\n", i);
    }

    char* cstr = (char*) calloc(numberofonlyletters + 1, sizeof(char));

    //printf("calloc created\n");

    i = 0;
    int p = 0;
    while(str[i] != '\n')
    {
        //printf("adding to cstr");
        if (isalpha(str[i]))
        {
            cstr[p] = (char) tolower(str[i]);
            p++;
        }
        i++;
    }
    cstr[p] = '\n';
    //printf("cstr: ");
    //puts(cstr);
    return cstr;
}
