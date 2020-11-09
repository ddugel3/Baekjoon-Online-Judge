#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



int main() {
	const int SZ=1000001;
	int a[SZ] = { 0,1 };
	int m, n;
	scanf("%d%d", &m, &n);

	for (int i = 2; i <= n; i++) {
		for (int j = 2; i * j <= n; j++) {
			a[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (!a[i]) printf("%d\n", i);
	}
}