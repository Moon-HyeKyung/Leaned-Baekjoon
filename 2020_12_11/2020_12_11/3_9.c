/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.
���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

#include <stdio.h>

int main() {
	int n;

	do {
		scanf_s("%d", &n);
	} while (n < 1 || n>100);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	
	return 0;
}