/*
����
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

���
�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num, a, b;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		do {
			scanf_s("%d %d", &a, &b);
		} while (a <= 0 || b >= 10);
		printf("%d\n", a + b);
	}
	return 0;
}