#include<stdio.h>

int main(void) {
	char str[105];
	while (1) {
		gets_s(str);
		if (str == "")
			break;
		printf("%s", str);
	}
	return 0;
}