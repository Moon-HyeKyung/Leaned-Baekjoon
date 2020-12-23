#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	while (a <= 0 || b >= 10)
		scanf_s("%d %d", &a, &b);
	printf("%d", a * b);
	return 0;
}