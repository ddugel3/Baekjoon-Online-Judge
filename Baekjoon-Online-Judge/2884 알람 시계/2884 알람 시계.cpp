#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;	scanf("%d %d", &a, &b);
	if (b < 45)	printf("%d %d", a - 1, 60+(b-45));
	else		printf("%d %d", a, b - 45);
}