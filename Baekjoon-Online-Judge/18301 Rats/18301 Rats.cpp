#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;	scanf("%d %d %d", &a, &b, &c);
	printf("%d",int( (a + 1) * (b + 1) / (c + 1) - 1) );
}
