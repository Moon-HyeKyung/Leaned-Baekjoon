/*
����
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

���
�� �׽�Ʈ ���̽����� "Case #x: A + B = C" �������� ����Ѵ�. x�� �׽�Ʈ ���̽� ��ȣ�̰� 1���� �����ϸ�, C�� A+B�̴�.
*/

#include <stdio.h>

int main() {
	int t, a, b;
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++) {
		do {
			scanf_s("%d %d", &a, &b);
		} while (a <= 0 || b >= 10);

		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	return 0;
}