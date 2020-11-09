#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n,a[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%d", &a[i]);
	sum(a, n);
	printf("%d", sum(a, n));
}

long long sum(int *a, int n) {
	long long ans=0;
	for (int i = 0; i < n; i++)	
		ans += a[i];
	return ans;
}
