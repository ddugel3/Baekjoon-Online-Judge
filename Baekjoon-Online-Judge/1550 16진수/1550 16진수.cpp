#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int  nDec = 0;
    char szHex[16];     scanf("%s", szHex);
    nDec = (int)strtol(szHex, NULL, 16);
    printf("%d", nDec);
}