#define _CRT_SECURE_NO_WARNINGS
	
#include<stdio.h>

int main()
{
	char Alphabet[1000001];
	int cnt[27];
	scanf("%s", Alphabet);
	for (int i = 0; Alphabet[i]!='\0'; i++) {
		if (Alphabet[i] >= 'A' && Alphabet[i] <= 'Z')
			cnt[int(Alphabet[i]) - 'A' + 1]++;
		else
			cnt[int(Alphabet[i]) - 'a' + 1]++;
	}
	int max = 0,x=0,t=0;
	for (int i = 1; i < 27; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			t = i;
		}
	}
	for (int i = 1; i < 27; i++) {
		if (cnt[i] == max)
			x++;
	}
	if (x != 1)	printf("?");
	else		printf("%c",t+64);
}