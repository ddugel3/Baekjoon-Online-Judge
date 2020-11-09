#define _CRT_SECURE_NO_WARNINGS

using namespace std;
#include<stdio.h>
#include<string.h>
#include<queue>

int main()
{
	int A, B, C,n;
	scanf("%d %d %d", &A, &B, &C);
	n = A * B * C;
	queue<int> numlist;
	while (n != 0) {
		numlist.push(n%10);
		n /= 10;
	}
	int l = numlist.size(), arr[11] = {0,},k;
	for (int i = 0; i < l; i++) {
		k = numlist.front();
		numlist.pop();
		arr[k]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}