/*
���� �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �� ������ ���� N�� �־�����. �� ���� 1000���� �۰ų� ����. 
��° �ٿ� �������� ���� ������ �־�����. �� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.

���
ù° �ٿ� ���ο� ����� ����Ѵ�. ���� ����� ��°��� ������� �Ǵ� �������� 10-2 �����̸� �����̴�.
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int N, M, check = 0;
	int* score;
	double sum = 0;
	do {
		scanf_s("%d", &N);
	} while (N > 1000);
	score = (int*)(malloc(sizeof(int) * N));

	for(int i =0; i<N; i++){
		scanf_s("%d", score+i);
		if (*(score + i) > 100 || *(score+i) < 0) i--;
		if (*(score + i) != 0) check = 1;
		if (*(score + N-1) == 0 && check == 0) i--;
	}

	M = score[0];
	for (int i = 1; i < N; i++) {
		if (M < *(score + i)) M = *(score + i);
	}
	for (int i = 0; i < N; i++)
		sum += (double)*(score + i) / M * 100;
	printf("%f", sum / N);

	free(score);
	return 0;
}