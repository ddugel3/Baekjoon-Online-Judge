#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	double n = (double)A / (double)B;
	printf("%.10lf", n);

	return 0;
}