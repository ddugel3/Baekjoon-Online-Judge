#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, ar[5];	scanf("%d %d", &a, &b);
	for (int i = 0; i < 5; i++)	scanf("%d", &ar[i]);
	for (int i = 0; i < 5; i++)	printf("%d ",ar[i]-a*b);
}