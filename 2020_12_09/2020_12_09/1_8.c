#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	while (a <= 0 || b >= 10)
		scanf_s("%d %d", &a, &b);
	printf("%.9lf", (double)a / b);
	return 0;
}