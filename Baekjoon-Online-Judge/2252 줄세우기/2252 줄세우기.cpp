#include<stdio.h>
#include<queue>
#include<vector>

using namespace std;
const int SZ = 105;
int ind[SZ],n;

queue<int> q;
vector<int> graph[SZ];

void topo_sort() {
	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0)	q. push(1);
	}
	while (!q.empty()) {
		int f = q.front();	q.pop();
		printf("%d", f);
		for (int i = 0; i < graph[f].size(); i++) {
			int nxt = graph[f][i];
			ind[nxt]--;
			if (ind[nxt] == 0)	q.push(nxt);
		}
	}
}
int main(void) {
	int m;	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		int x, y;	scanf("%d %d", &x, &y);
		graph[x].push_back(y);
		ind[y]++;
	}
	topo_sort();
	return 0;
}