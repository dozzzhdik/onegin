#include "allfunctions.h"

int strcmpEND(const char* str1, const char* str2)
{
    //printf("str1 = %p\n", str1);
    //printf("strchr(str1, '\\n') = %p\n", strchr(str1, '\0'));

    // printf("str1 = %s\n", str1);
    // printf("str2 = %s\n", str2);
    int i = nstrlen(str1);
    // printf("len1 = %d , str1 = %s\n", i, str1);
    int k = nstrlen(str2);
    // printf("k = %d\n", k);
    while(i > 0 && k > 0)
    {
        //printf("while strcmpEND started\n");
        while(!isalpha(str1[i]))
            i--;

        while(!isalpha(str2[k]))
            k--;

        if(str1[i] > str2[k])
            return 1;

        else if(str1[i] < str2[k])
            return -1;

        i--;
        k--;
    }
    return 0;
}
