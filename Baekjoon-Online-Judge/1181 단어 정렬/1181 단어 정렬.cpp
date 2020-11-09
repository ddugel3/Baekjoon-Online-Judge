#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;	scanf("%d", &n);
	char str[100][100];
	for (int i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}
	printf("%s",str[1][1]);
}