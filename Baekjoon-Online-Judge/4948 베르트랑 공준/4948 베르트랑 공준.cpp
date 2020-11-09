#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	const int SZ = 250000;
	while (1) {
		int n; scanf("%d", &n);
		if (n == 0)	break;
		else {
			int arr_prime[SZ] = {0,1};
			int cnt;
			for (int i = 2; i <= n * 2; i++)
				for (int j = 2; i * j <= n * 2; j++)
					arr_prime[i * j] = 1;
			cnt = 0;
			for (int i = n+1; i <= n * 2; i++)
				if (!arr_prime[i])
					cnt++;
			printf("%d\n", cnt);
		}
	}
}