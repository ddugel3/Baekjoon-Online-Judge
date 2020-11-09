#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int arr[300000];

int main() {
	int n,t,max=0;	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n-2; i++) 
		for (int j = i+1; j < n - 1; j++) 
			for (int k = j+1; k < n; k++) 
				if (arr[i] + arr[j] + arr[k] > max && arr[i] + arr[j] + arr[k] <= t)
					max = arr[i] + arr[j] + arr[k];
	printf("%d", max);
}