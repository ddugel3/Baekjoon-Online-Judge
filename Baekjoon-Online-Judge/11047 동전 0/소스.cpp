#include<stdio.h>

const int SZ = 12;
int arr[SZ],res;

int main(void) {
	int N, K;	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
	}
	int cnt = 0, a=1;
	do{
		if (K/arr[N-a] >= 1) {
			cnt += K / arr[N - a];
			K %= arr[N - a];
			a++;
		}
		if (a == N)
			break;
	} while (K > 0);
	printf("%d",res);
	return 0;
}