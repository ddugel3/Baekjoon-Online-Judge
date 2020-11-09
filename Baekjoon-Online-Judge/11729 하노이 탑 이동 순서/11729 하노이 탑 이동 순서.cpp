#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

void hanoi(int str, int end, int mid, int n) {
	if (n == 1) {
		printf("%d %d\n",str,end);
		return;
	}
	hanoi(str, mid, end, n - 1);
	hanoi(str, end, mid, 1);
	hanoi(mid, end, str, n - 1);
}


int main(void) {
	int N;	scanf("%d", &N);
	int k = pow(2, N)-1;
	printf("%d\n", k);
	hanoi(1,3,2,N);
	return 0;
}