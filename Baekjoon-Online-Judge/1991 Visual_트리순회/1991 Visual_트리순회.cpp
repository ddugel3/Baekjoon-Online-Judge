#include<stdio.h>

const int SZ = 27;
int res[SZ];
char parent[SZ], left[SZ], right[SZ];

void pre(char node) {
	if (node == 0) return;
	printf("%d", node);
	pre(left[node]);
	pre(right[node]);
}
x
int main() {
	int N;  scanf("%d", &N); getchar();
	int res[SZ] = { 0, };
	for (int i = 1; i <= N; i++) {
		parent[i] = getchar();    getchar();
		left[i] = getchar();    getchar();
		right[i] = getchar();    getchar();
	}
	for (int i = 1; i <= N; i++) {
		if (left[i] != '.')
			res[left[i] - 'A' + 1] = 1;
		if (right[i] != '.')
			res[right[i] - 'A' + 1] = 1;
		if (left[i] != '.' && right[i] != '.') {
			res[left[i] - 'A' + 1] = 1;
			res[right[i] - 'A' + 1] = 1;
		}
	}
	
	/*
	for (int i = 1; i <= N; i++)
		printf("%d", res[i]);
		*/
}
