/*
����
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

���
�Է����� �־��� ���� N���� ���� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n, sum = 0;
	char* num;
	do {
		scanf_s("%d", &n);
	} while (n < 1 || n>100);
	getchar();
	num = (char*)(malloc(sizeof(char) * n + 1));
	gets(num);
	for (int i = 0; i < n; i++) {
		sum += num[i] - 48;
	}
	printf("%d", sum);
	return 0;
}