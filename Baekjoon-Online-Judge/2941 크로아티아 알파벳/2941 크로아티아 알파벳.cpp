#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char Alphabet[101];
int  cnt = 0;

int main() {
	scanf("%s", Alphabet);
	for (int i = 0; i < strlen(Alphabet); i++) {
		if (Alphabet[i] == 'c' && Alphabet[i + 1] == '=') {
			i++;
		}
		else if (Alphabet[i] == 'c' && Alphabet[i + 1] == '-') {
			i++;
		}
		else if (Alphabet[i] == 'd' && Alphabet[i + 1] == 'z' && Alphabet[i + 2] == '=') {
			i += 2;
		}
		else if (Alphabet[i] == 'd' && Alphabet[i + 1] == '-') {
			i++;
		}
		else if (Alphabet[i] == 'l' && Alphabet[i + 1] == 'j') {
			i++;
		}
		else if (Alphabet[i] == 'n' && Alphabet[i + 1] == 'j') {
			i++;
		}
		else if (Alphabet[i] == 's' && Alphabet[i + 1] == '=') {
			i++;
		}
		else if (Alphabet[i] == 'z' && Alphabet[i + 1] == '=') {
			i++;
		}
		cnt++;
	}
	printf("%d", cnt);
}