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

int main() {
	int c, n, sum = 0, count = 0;
	int *score;
	float avg;
	scanf_s("%d", &c);
	for (int i = 0; i < c; i++) {
		do {
			scanf_s("%d", &n);
		} while (n < 1 || n>1000);
		score = (int*)(malloc(sizeof(int) * n));
		for (int j = 0; j < n; j++) {
			scanf_s("%d", score + j);
			if (*(score + j) < 0 || *(score + j) > 100) {
				j--; continue;
			}
			sum += *(score + j);
		}
		avg = (float)sum / n;
		for (int j = 0; j < n; j++) if (*(score + j) > avg) count++;
		printf("%.3f%% \n", (double)count / n * 100);
		sum = 0;
		count = 0;
		free(score);
	}
	return 0;
}