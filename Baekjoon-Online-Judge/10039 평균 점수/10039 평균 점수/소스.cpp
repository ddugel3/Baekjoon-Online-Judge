#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[5], n=0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] <= 40)
			arr[i] = 40;
		n += arr[i];
	}
	printf("%d", n / 5);
}