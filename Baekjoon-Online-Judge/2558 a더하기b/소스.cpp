#include<stdio.h>

int main() {
	int A[2];
	for (int i = 0; i < 2; i++)
		scanf_s("%d",&A[i]);
	printf("%d", A[0] + A[1]);
	return 0;
}