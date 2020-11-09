#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

const int N = 305;
int n,l[N];

using namespace std;
int stairs(int k)
{
	if (k == 1)			return l[1];
	else if (k == 2)	return l[1] + l[2];
	else if (k == 3)	return max(l[1] + l[2], max(l[1] + l[3], l[2] + l[3]));
	else				return max(stairs(k - 3) + l[k - 1] + l[k], stairs(k - 2) + l[k]);
	// max(B(i-1)+A[i],B(i-2)+A[i-1]+A[i-2];
}

int main(void)
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)		scanf("%d", &l[i]);
	int max = 0;
	printf("%d", stairs(n));
	return 0;
}