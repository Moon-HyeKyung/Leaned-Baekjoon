#include <stdio.h>

int main() {
	int a, b;

	scanf_s("%d %d", &a, &b);
	while (a < 1 || b > 10000 || b<1)
		scanf_s("%d %d", &a, &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	return 0;
}