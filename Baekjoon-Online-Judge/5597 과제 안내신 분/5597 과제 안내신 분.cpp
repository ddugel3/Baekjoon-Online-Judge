#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int arr[32];
int main()
{
    
    for (int i = 0; i < 28; i++) {
        int n;  scanf("%d", &n);
        arr[n] = 1;
    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] != 1)  printf("%d\n", i);
    }
}