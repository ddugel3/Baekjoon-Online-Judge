#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    while (1) {
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        if (a + b + c == 0)    
            break;
        if (b * b + c * c == a * a || a * a + c * c == b * b || b * b + a * a == c * c)
            printf("right");
        else
            printf("wrong");
    }
}