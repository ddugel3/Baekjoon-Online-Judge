#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int st, i = 0;	scanf("%d", &st);
	int n, a, b, c, d;
	n = st;
	do {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		i++;
		n = d;
	} while (n != st);
	printf("%d", i);
}	