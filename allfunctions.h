#ifndef ALLFUNCTIONS_H
#define ALLFUNCTIONS_H

// #include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <math.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//#define printf(...) ;

typedef struct files {
    FILE *onegintext;
    FILE *oneginsorted;
    int filestoread;
    size_t numberofsymbols;
}files_t;

typedef struct text {
    int strcounter;
    char** strptr;
    char** strptr_original_onegin;
    char* onegin;
}text_t;


int createstrptr(text_t *text);
int output(files_t files, text_t text);
int outputoriginalonegin(files_t files, text_t text);
void bubblesortBEG(text_t *text);
int strcmpBEG(char* strptr1, char* strptr2);
int nstrlen(const char* str);
int skipnotalphaBEG(char* str);
int swap(char** strptr1, char** strptr2);
char* stronlyletters(char* str);
int countstr(char* onegin);
size_t findnumberofsymbols(FILE *onegintext);
int qsortEND(const void* par1, const void* par2);
int strcmpEND(const char* str1, const char* str2);
void filesroutine(files_t *files, text_t *text);
void closefilesandfreecallocs(files_t files, text_t text);

//int comparestr(const void* par1, const void* par2, int strcounter, char** strptr);

#endif // ALLFUNCTIONS_H
