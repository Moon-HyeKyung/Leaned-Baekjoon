/*
* ����
* N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
* 
* �Է�
* ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. 
��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.

* ���
ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_NO_WARNINGS

int main() {
	int n, input, max, min;
	do {
		scanf_s("%d", &n);
		scanf_s("%d", &input);
		max = input;
		min = input;
	} while (n < 1 || n>1000000);
	for (int i = 1; i < n; i++) {
		scanf_s("%d", &input);
		if (max < input) max = input;
		if (min > input) min = input;
	}
	printf("%d %d", min, max);
	return 0;
}