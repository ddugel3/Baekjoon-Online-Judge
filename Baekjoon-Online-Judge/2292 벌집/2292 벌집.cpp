#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n,i=0;	scanf("%d", &n);
	if (n == 1)	printf("1");
	else {
		for (int sum = 2; sum <= n; i++)
			sum += i * 6;
		printf("%d", i);
	}
}