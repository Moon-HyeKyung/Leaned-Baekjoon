#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	while (a <= 0 || b >= 10) {
		scanf("%d %d", &a, &b);
	}
	printf("%d", a + b);
	return 0;
}