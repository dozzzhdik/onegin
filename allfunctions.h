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

int createstrptr(char* onegin, char** strptr);
int output(char** strptr, int strcounter, FILE* oneginsorted);
void bubblesortBEG(char** strptr, int strcounter);
int strcmpBEG(char* strptr1, char* strptr2);
int nstrlen(const char* str);
int skipnotalphaBEG(char* str);
int swap(char** strptr1, char** strptr2);
char* stronlyletters(char* str);
int countstr(char* onegin);
size_t findnumberofsymbols(FILE *onegintext);
int qsortEND(const void* par1, const void* par2);
int strcmpEND(const char* str1, const char* str2);

//int comparestr(const void* par1, const void* par2, int strcounter, char** strptr);

#endif // ALLFUNCTIONS_H
