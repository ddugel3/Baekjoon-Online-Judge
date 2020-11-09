#define _CRT_SECURE_NO_WARNINGS
#define max(a, b) (((a) > (b)) ? (a) : (b))
#include<stdio.h>

int main()
{
	int A, B;	scanf("%d %d", &A, &B);
	int AA=0, BB=0;
	int h = 0;
	while (A > 0) {
		AA *= 10;
		AA += (A % 10);
		A /= 10;
	}
	while (B > 0) {
		BB *= 10;
		BB += (B % 10);
		B /= 10;
	}
	printf("%d", max(AA, BB));
}