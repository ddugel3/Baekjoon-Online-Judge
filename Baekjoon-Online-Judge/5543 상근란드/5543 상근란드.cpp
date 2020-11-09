#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, c, d, e;	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int i, j;
	if (a >= b&& b >= c)
		i = c;
	else if (b >= a&& a >= c)
		i = c;
	else if (a >= c&& c >= b)
		i = b;
	else if (c >= a&& a >= b)
		i = b;
	else if (b >= c&& c >= a)
		i = a;
	else if (c >= b&& b >= a)
		i = a;

	if (d >= e)
		j = e;
	if (e >= d)
		j = d;

	printf("%d", i + j - 50);

}