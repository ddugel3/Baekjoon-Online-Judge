#include<stdio.h>
#include<algorithm>
#include<stack>

using namespace std;

const int SZ = 5005;
int arr[SZ];

void jo(int n, int m) {
	if (n - a < m) {
		printf ("%d",arr[m%n]);
	}
	printf("%d", arr[m]);
	arr[m] = 5005;
	a++;
	sort(arr+1, arr + n);
	jo(n - a, m);
}

int main(void) {
	int n, m;	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	//jo(n, m);
	int a = 3;
	for (int t= 0; t < n; t++) {
		printf("%d", arr[a]);
	}
	return 0;
}