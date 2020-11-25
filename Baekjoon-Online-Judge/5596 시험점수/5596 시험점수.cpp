#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int arr[2][4], S = 0, T = 0;
    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 4; j++) 
            scanf("%d", &arr[i][j]);
    S = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3];
    T = arr[1][0] + arr[1][1] + arr[1][2] + arr[1][3];
    if (S >= T)   printf("%d", S);
    else printf("%d", T);
}