#include <stdio.h>
#include <queue>
#include <vector>
#include <utility>
#pragma warning(disable:4996)
using namespace std;
const int SZ = 105;
int graph[SZ][SZ];
int visit[SZ][SZ];
queue<pair<pair<int, int>, int>> q;
int n, m;
int bfs(int sttX, int sttY)
{
	int da[4] = { 0, 0, -1, 1 }; int db[4] = { 1, -1, 0, 0 };
	q.push(make_pair(make_pair(sttX, sttY), 0)); visit[sttX][sttY] = 1;
	while (!q.empty())
	{
		pair<pair<int, int>, int> f = q.front(); q.pop();
		int dist = f.second;
		if (f.first.first == n - 1 && f.first.second == m - 1) return dist;
		for (int i = 0; i < 4; i++)
		{
			int na = f.first.first + da[i];
			int nb = f.first.second + db[i];
			if (na < 0 || na >= n) continue;
			if (graph[na][nb] == 0) continue;
			if (visit[na][nb] == 1) continue;
			q.push(make_pair(make_pair(na, nb), dist + 1));
			visit[na][nb] = 1;
		}
	}
	return;
}
int main(void)
{
	int n, m; scanf("%d %d", &n, &m); getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) graph[i][j] = getchar() - 48;
		getchar();
	}
	return 0;
}
