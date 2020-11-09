#include<stdio.h>

int main(void) {
	long long a, b;	scanf_s("%lld %lld",&a,&b);
	printf("%lld", (a + b)*(a - b));
}