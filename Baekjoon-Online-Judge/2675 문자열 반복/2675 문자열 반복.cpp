#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main() {
	int n;	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		int time,k=0;	scanf("%d", &time);
		char word[11];	scanf("%s", word);
		for (int l = 0; l < strlen(word); l++) {
			for (int j = 0; j < time; j++) {
				printf("%c", word[l]);
			}
		}
		printf("\n");
	}
}