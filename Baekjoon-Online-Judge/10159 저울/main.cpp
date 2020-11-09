#include<cstdio>
#include<cstdlib>
int main() {
	int i, j, k, l, m, n, cnt;
	scanf("%d", &n);
	bool **A = (bool **)calloc((n + 1), sizeof(bool *));
	for (i = 0; i <= n; i++) A[i] = (bool *)calloc((n + 1), sizeof(bool));
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &k, &l);
		A[k][l] = true;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == j) continue;
		for (k = 1; k <= n; k++) {
				if (i == k && j == k) continue;
				if (A[j][i] && A[i][k]) A[j][k] = true;
			}
		}
}
	for (i = 1; i <= n; i++) {
		cnt = 0;
		for (j = 1; j <= n; j++) {
			if (i != j && !A[i][j] && !A[j][i]) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
