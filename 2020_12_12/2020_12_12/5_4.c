/*
����
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.
�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����. �� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.

���
ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a[10], remainder[10] = { 0 }, reminder[10] = { 0 }, k = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] < 0 || a[i]>1000) {
			i--;
			continue;
		}
		remainder[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (remainder[i] == remainder[j])
				if(reminder[i])
				reminder[k]=reminder[i];
		}
	}
	printf("%d", count);

	return 0;
}