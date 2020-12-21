/*
����
���� n���� �־����� ��, n���� ���� ���ϴ� �Լ��� �ۼ��Ͻÿ�.
C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
a: ���� ���ؾ� �ϴ� ���� n���� ����Ǿ� �ִ� �迭 (0 �� a[i] �� 1,000,000, 1 �� n �� 3,000,000)
n: ���� ���ؾ� �ϴ� ������ ����
���ϰ�: a�� ���ԵǾ� �ִ� ���� n���� ��

*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

long long sum(int* a, int n);

int main() {
	int* a,n;
	do {
		scanf_s("%d", &n);
	} while (n < 1 || n>3000000);
	sum(a, n);
	return 0;
}

long long sum(int* a, int n) {
	long long sum = 0;
	
	for (int i = 0; i < n; i++) {
		scanf_s("%d", a + i);
		sum += *(a + i);
	}
	return sum;
}