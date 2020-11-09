#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main() {
	int arr[10];
	char PhoneNumber[16];	scanf("%s", PhoneNumber);
	int sum=0;
	for (int i= 0;i<strlen(PhoneNumber);i++){
		if (PhoneNumber[i]>='A' && PhoneNumber[i] <= 'C') {
			sum += 3;
		}
		else if (PhoneNumber[i] <= 'F') {
			sum += 4;
		}
		else if (PhoneNumber[i] <= 'I') {
			sum += 5;
		}
		else if (PhoneNumber[i] <= 'L') {
			sum += 6;
		}
		else if (PhoneNumber[i] <= 'O') {
			sum += 7;
		}
		else if (PhoneNumber[i] <= 'S') {
			sum += 8;
		}
		else if (PhoneNumber[i] <= 'V') {
			sum += 9;
		}
		else if (PhoneNumber[i] <= 'Z') {
			sum += 10;
		}
	}
	printf("%d", sum);
}