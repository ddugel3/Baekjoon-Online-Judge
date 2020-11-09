#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

long long a,b,c;

int main() {	
	scanf("%llu %llu %llu", &a, &b, &c);
	printf("%llu", a + b + c);
}