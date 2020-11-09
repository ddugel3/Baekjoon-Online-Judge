#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int a, b, c;
	a = x < y ? x : y;
	b = w - x < h - y ? w - x : h - y;
	c = a < b ? a : b;
	printf("%d", c);
}