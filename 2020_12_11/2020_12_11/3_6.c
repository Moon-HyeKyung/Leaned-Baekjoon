/*
����
�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� 100,000���� �۰ų� ���� �ڿ��� N�� �־�����.

���
ù° �ٺ��� N��° �� ���� ���ʴ�� ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n;
	do {
		scanf_s("%d", &n);
	} while (n > 100000);

	for (int i = n; i >= 1; i--) printf("%d\n", i);

	return 0;
}