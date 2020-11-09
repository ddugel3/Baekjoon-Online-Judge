#include<stdio.h>
int main() {
	int a, b, c, d, e, f, g, h, i, j, k;
	scanf("%d %d %d", &a, &b, &c);
	d = b;
	e = a;
	f = 1;
	g = 2;
	h = 0;
	i = 1;
	j = 0;
	k = 0;
	if (a*b < c) { printf("0"); return 0; }
	do {
		switch (k) {
		case 0: if (h + (d - j) <= c) { h += (d - j), j = d, d--; }
				else { j += (c - h), h = c; }
				k = 1;
				break;
		case 1: if (h + (e - i) <= c) { h += (e - i), i = e, e--; }
				else { i += (c - h), h = c; }
				k = 2;
				break;
		case 2: if (h + (j - f) <= c) { h += (j - f), j = f, f++; }
				else { j -= (c - h), h = c; }
				k = 3;
				break;
		case 3:if (h + (i - g) <= c) { h += (i - g), i = g, g++; }
			   else { i -= (c - h), h = c; }
			   k = 0;
			   break;
		}
	} while (h < c);
	printf("%d %d", i, j);
	return 0;
}
