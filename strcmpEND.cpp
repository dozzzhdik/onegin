#include "allfunctions.h"

int strcmpEND(const char* str1, const char* str2)
{
    //printf("str1 = %p\n", str1);
    //printf("strchr(str1, '\\n') = %p\n", strchr(str1, '\0'));

    // printf("str1 = %s\n", str1);
    // printf("str2 = %s\n", str2);
    int i1 = nstrlen(str1);
    // printf("len1 = %d , str1 = %s\n", i, str1);
    int i2 = nstrlen(str2);
    // printf("k = %d\n", k);
    while(i1 > 0 && i2 > 0)
    {
        //printf("while strcmpEND started\n");
        while(!isalpha(str1[i1]))
            i1--;

        while(!isalpha(str2[i2]))
            i2--;

        if(str1[i1] > str2[i2])
            return 1;

        else if(str1[i1] < str2[i2])
            return -1;

        i1--;
        i2--; 
    }
    return 0;
}
