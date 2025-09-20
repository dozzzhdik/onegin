#ifndef ALLFUNCTIONS_H
#define ALLFUNCTIONS_H

//#include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <math.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>

int createstrptr(char* onegin, char** strptr);
int output(char** strptr, int strcounter, FILE* oneginsorted);
void bubblesortBEG(char** strptr, int strcounter);
void bubblesortEND(char** strptr, int strcounter);
int strcmpBEG(char* strptr1, char* strptr2);
int nstrlen(char* str);
int skipnotalphaBEG(char* str);
int swap(char** strptr1, char** strptr2);

//int comparestr(const void* par1, const void* par2, int strcounter, char** strptr);

#endif // ALLFUNCTIONS_H
