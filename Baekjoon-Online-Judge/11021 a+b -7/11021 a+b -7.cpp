#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, a, b;	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}
	return 0;
}