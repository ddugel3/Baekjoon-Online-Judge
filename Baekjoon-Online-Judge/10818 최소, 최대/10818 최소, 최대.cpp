#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<algorithm>

using namespace std;
const int SZ = 100000;

int main()
{
	int n, arr[SZ];	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	printf("%d %d", arr[0], arr[n-1]);
}