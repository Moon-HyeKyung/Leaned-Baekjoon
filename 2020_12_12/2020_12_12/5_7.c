/*
����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. 
������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int c, n, sum = 0;
	int score;
	scanf_s("%d", &c);
	for (int i = 0; i < c; i++) {
		do {
			scanf_s("%d", &n);
		} while (n < 1 || n>1000);
		
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &score);
			if (score < 0 || score > 100) {
				j--; continue;
			}
			sum += score;
		}
		printf("%.3f%\n",(float)sum / n);
		sum = 0;
	}
	return 0;
}