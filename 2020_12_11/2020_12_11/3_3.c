/*
����
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

���
1���� n���� ���� ����Ѵ�.
*/
#include <stdio.h>

int main() {
	int n, sum = 0;

	do {
		scanf_s("%d", &n);
	} while (n < 1 || n>10000);

	for (int i = 1; i <= n; i++)  sum += i;

	printf("%d", sum);

	return 0;
}