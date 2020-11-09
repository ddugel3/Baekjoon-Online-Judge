#define _CRT_SECURE_NO_WARNINGS\

#include<stdio.h>
#include<string.h>

int main() {
	int n, cnt = 0;	scanf("%d", &n);
	for (int o = 0; o < n; o++) {
		char word[105];	scanf("%s", word);
		int l = strlen(word), k = 0, Alpha[26] = { 0, };
		if (l == 1)	cnt++;
		else {
			for (int i = 0; i < l; i++) {
				if (Alpha[word[i] - 'a'] == 0)	
					Alpha[word[i] - 'a'] = 1;
				else {
					/*
					if (word[i] == word[i - 1])
						continue;
					else
						k = 1;
					*/
					if (word[i] != word[i - 1])	
						k = 1;
				}
			}
			if (k == 0)	cnt++;
		}
	}
	printf("%d", cnt);
}